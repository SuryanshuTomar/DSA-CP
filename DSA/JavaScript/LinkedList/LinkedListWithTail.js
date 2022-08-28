class Node {
	constructor(value) {
		this.value = value;
		this.next = null;
	}
}

class LinkedListWithTail {
	constructor() {
		this.head = null;
		this.tail = null;
		this.size = 0;
	}

	isEmpty() {
		return this.size == 0;
	}

	getSize() {
		return this.size;
	}

	prepend(value) {
		let node = new Node(value);
		if (this.isEmpty()) {
			this.head = node;
			this.tail = node;
		} else {
			node.next = this.head;
			this.head = node;
		}
		this.size++;
	}

	append(value) {
		let node = new Node(value);
		if (this.isEmpty()) this.prepend(value);
		else {
			this.tail.next = node;
			this.tail = this.tail.next;
			this.size++;
		}
	}

	insertAtIndex(index, value) {
		if (index > 0 && this.isEmpty()) {
			console.log("Index does not exists");
			return;
		}
		if (index == 0) {
			this.prepend(value);
			return;
		}
		if (index == this.size - 1) {
			this.append(value);
			return;
		}
		let node = new Node(value);
		let prev = this.getNode(index - 1);
		node.next = prev.next;
		prev.next = node;
		this.size++;
	}

	deleteByIndex(index) {
		if (index < 0 || index > this.size - 1) {
			console.log("Index does not exists");
			return -1;
		}
		let deletedValue;
		if (index == 0) {
			deletedValue = this.head.value;
			if (this.size == 1) {
				this.head = null;
				this.tail = null;
			} else {
				this.head = this.head.next;
			}
			this.size--;
			return deletedValue;
		}
		let prev = this.getNode(index - 1);
		if (index == this.size - 1) {
			deletedValue = this.tail.value;
			this.tail = prev;
			prev.next = null;
			this.size--;
			return deletedValue;
		}
		let temp = prev.next;
		prev.next = temp.next;
		deletedValue = temp.value;
		temp.next = null;
		this.size--;
		return deletedValue;
	}

	searchByIndex(index) {
		if (index > this.size - 1) {
			console.log("Index does not exists");
			return -1;
		}
		return this.getNode(index).value;
	}

	search(value) {
		let temp = this.head;
		let index = -1;
		while (temp) {
			if (temp.value == value) return index;
			temp = temp.next;
			index++;
		}
		return index;
	}

	reverse() {
		let prev = null;
		let newTail = this.head;
		let curr = this.head;
		while (curr) {
			let nxt = curr.next;
			curr.next = prev;
			prev = curr;
			curr = nxt;
		}
		this.head = prev;
		this.tail = newTail;
	}

	getNode(index) {
		let temp = this.head;
		let i = 0;
		while (i < index) {
			temp = temp.next;
			i++;
		}
		return temp;
	}

	print() {
		if (this.isEmpty()) {
			console.log("Linked List is empty");
			return;
		}
		let temp = this.head;
		process.stdout.write("Head -> ");
		while (temp != null) {
			process.stdout.write(`${temp.value}`);
			process.stdout.write(" -> ");
			temp = temp.next;
		}
		process.stdout.write("Tail");
		console.log();
	}
}

function main() {
	const list = new LinkedListWithTail();
	console.log(list.isEmpty());
	console.log(list.getSize());

	list.prepend(10);
	list.prepend(20);
	list.prepend(30);
	list.print();
	list.getSize();

	list.append(60);
	list.append(70);
	list.print();
	list.getSize();

	list.insertAtIndex(3, 40);
	list.insertAtIndex(4, 50);
	list.print();
	list.getSize();

	console.log(list.searchByIndex(3));
	console.log(list.search(40));

	list.deleteByIndex(0);
	list.deleteByIndex(5);
	list.deleteByIndex(2);
	list.print();
	list.isEmpty();
	list.getSize();

	list.reverse();
	list.print();

	return 0;
}

main();
