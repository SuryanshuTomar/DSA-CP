class Node {
	constructor(value) {
		this.value = value;
		this.next = null;
	}
}

class CircularLinkedList {
	constructor() {
		this.head = null;
		this.tail = null;
		this.size = 0;
	}

	prepend(value) {
		const node = new Node(value);
		if (this.isEmpty()) {
			this.head = node;
			this.tail = node;
			this.tail.next = this.head;
			this.size++;
			return;
		}
		this.tail.next = node;
		node.next = this.head;
		this.head = node;
		this.size++;
	}

	append(value) {
		if (this.isEmpty()) {
			this.prepend(value);
			return;
		}
		const node = new Node(value);
		this.tail.next = node;
		node.next = this.head;
		this.tail = node;
		this.size++;
	}

	insert(index, value) {
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
				this.tail.next = this.head;
			}
			this.size--;
			return deletedValue;
		}
		let prev = this.getNode(index - 1);
		if (index == this.size - 1) {
			deletedValue = this.tail.value;
			this.tail = prev;
			prev.next = this.head;
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

	getNode(index) {
		let temp = this.head;
		let i = 0;
		while (i < index) {
			temp = temp.next;
			i++;
		}
		return temp;
	}

	isEmpty() {
		return this.size == 0;
	}

	getSize() {
		return this.size;
	}

	print() {
		if (this.isEmpty()) return;

		let temp = this.head;
		process.stdout.write("Head -> ");
		do {
			process.stdout.write(`${temp.value}`);
			process.stdout.write(` -> `);
			temp = temp.next;
		} while (temp != this.head);
		process.stdout.write(`Tail -> Head `);
		console.log();
	}
}

function main() {
	const list = new CircularLinkedList();
	console.log(list.isEmpty());
	console.log(list.getSize());
	list.print();

	list.prepend(30);
	list.prepend(20);
	list.prepend(10);
	list.print();
	console.log(list.isEmpty());
	console.log(list.getSize());

	list.append(40);
	list.append(50);
	list.append(60);
	list.print();
	console.log(list.isEmpty());
	console.log(list.getSize());

	list.insert(1, 70);
	list.insert(2, 80);
	list.insert(3, 90);
	list.print();
	console.log(list.isEmpty());
	console.log(list.getSize());

	list.print();
	list.deleteByIndex(1);
	list.deleteByIndex(2);
	list.deleteByIndex(3);
	list.print();
	console.log(list.isEmpty());
	console.log(list.getSize());
}

main();
