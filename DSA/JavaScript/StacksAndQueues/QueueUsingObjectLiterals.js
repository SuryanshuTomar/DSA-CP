// Optimised Version of Queue using Object Literals.
// In this version of queue the dequeue operation will take O(1) TC.

class Queue {
	constructor() {
		this.items = {};
		this.front = 0;
		this.rear = 0;
	}
	enqueue(value) {
		this.items[this.rear] = value;
		this.rear++;
	}
	dequeue() {
		let deletedValue = this.items[this.front];
		delete this.items[this.front];
		this.front++;
		return deletedValue;
	}
	getSize() {
		return this.rear - this.front + 1;
	}
	peek() {
		return this.items[this.front];
	}
	print() {
		console.log(this.items);
	}
}

function main() {
	const queue = new Queue();
	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);
	queue.print();
	console.log(queue.peek());
	queue.dequeue();
	queue.dequeue();
	queue.print();
	queue.enqueue(20);
	queue.enqueue(30);
	queue.print();
	console.log(queue.peek());
	console.log(queue.getSize());
}

main();
