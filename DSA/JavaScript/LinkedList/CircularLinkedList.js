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
			// this.tail.next = this.head;
			this.size++;
			return;
		}
		node.next = this.head;
		this.tail.next = this.head;
		this.head = node;
		this.size++;
		console.log("Next : ", this.tail.next);
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
		} while (temp != this.tail);
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
	// list.prepend(10);
	console.log(list.isEmpty());
	console.log(list.getSize());
	list.print();
}

main();
