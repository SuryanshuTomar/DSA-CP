class DoublyLinkedList {
	Node = class NodeClass {
		constructor(value) {
			this.value = value;
			this.next = null;
			this.prev = null;
		}
	};

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
		let node = new this.Node(value);
		if (this.isEmpty()) {
			this.head = node;
			this.tail = node;
			this.size++;
			return;
		}
		node.next = this.head;
		this.head.prev = node;
		this.head = node;
		this.size++;
	}

	append(value) {
		if (this.isEmpty()) {
			this.prepend(value);
			return;
		}
		let node = new this.Node(value);
		this.tail.next = node;
		node.prev = this.tail;
		this.tail = node;
		this.size++;
	}

	insert(index, value) {
		if (index < 0 || index >= this.size) {
			console.log("Index does not exists !");
			return;
		}

		if (this.isEmpty() || index == 0) {
			this.prepend(value);
			return;
		}

		if (index == this.size - 1) {
			this.append(value);
			return;
		}
		const node = new this.Node(value);
		const prev = this.getNode(index - 1);
		const nextNode = prev.next;
		node.next = nextNode;
		nextNode.prev = node;
		prev.next = node;
		node.prev = prev;
		this.size++;
	}

	delete(index) {
		let deletedValue = -1;
		if (index < 0 || index >= this.size || this.isEmpty()) {
			console.log("Index does not exists !");
			return deletedValue;
		}
		if (index == 0) {
			if (this.size == 1) {
				deletedValue = this.head.value;
				this.head = null;
				this.tail = null;
			} else {
				deletedValue = this.head.value;
				this.head = this.head.next;
				this.head.prev = null;
			}
			this.size--;
			return deletedValue;
		}
		const prevNode = this.getNode(index - 1);
		if (index == this.size - 1) {
			deletedValue = this.tail.value;
			this.tail = this.tail.prev;
			this.tail.next = null;
			this.size--;
			return deletedValue;
		}
		const nextNode = prevNode.next.next;
		deletedValue = prevNode.next.value;
		prevNode.next = nextNode;
		nextNode.prev = prevNode;
		this.size--;
		return deletedValue;
	}

	find(value) {
		let temp = this.head;
		let index = 0;
		while (temp) {
			if (value == temp.value) {
				return index;
			}
			temp = temp.next;
			index++;
		}
		return -1;
	}

	findByIndex(index) {
		if (index < 0 || index >= this.size || this.isEmpty()) {
			console.log("Index does not exists !");
			return -1;
		}
		return this.getNode(index).value;
	}

	reverse() {
		let temp = null;
      let curr = this.head;

		while (curr) {
			temp = curr.prev;
         curr.prev = curr.next;
         curr.next = temp;
         curr = curr.prev;
		}
      if(temp != null){
         this.head = temp.prev;
      }
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
		if (this.isEmpty()) return;

		let temp = this.head;
		process.stdout.write("Head <-> ");
		while (temp) {
			process.stdout.write(`${temp.value}`);
			process.stdout.write(" <-> ");
			temp = temp.next;
		}
		process.stdout.write("Tail");
		console.log();
	}
}

function main() {
	const dList = new DoublyLinkedList();
	console.log("Is String Empty: ", dList.isEmpty());
	console.log("Size of Doubly Linked List : ", dList.getSize());
	dList.prepend(10);
	dList.prepend(20);
	dList.prepend(30);
	dList.print();
	dList.append(40);
	dList.append(50);
	dList.append(60);
	dList.print();
	console.log("Size of Doubly Linked List : ", dList.getSize());
	dList.insert(3, 70);
	dList.insert(4, 80);
	dList.insert(5, 90);
	dList.print();
	dList.delete(1);
	dList.delete(3);
	dList.delete(3);
	dList.print();
	console.log("Size of Doubly Linked List : ", dList.getSize());
	console.log("Find : ", dList.find(70));
	console.log("FindByIndex : ", dList.findByIndex(3));
	dList.reverse();
	dList.print();
}

main();
