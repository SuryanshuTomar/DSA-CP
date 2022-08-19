class Node {
	constructor(value) {
		this.value = value;
		this.next = null;
	}
}

class LinkedList {
	constructor() {
		this.head = null;
		this.size = 0;
	}

	isEmpty() {
		return this.size === 0 || false;
	}

	getSize() {
		return this.size;
	}

	prepend(value) {
		const node = new Node(value);
		if (this.isEmpty()) {
			this.head = node;
		} else {
			node.next = this.head;
			this.head = node;
		}
		this.size++;
	}
}

function main() {
	const list = new LinkedList();
	console.log("Is List Empty ? : ", list.isEmpty());
	console.log("List Size : ", list.getSize());
	list.prepend(10);
	list.prepend(20);
	list.prepend(30);
}

main();
