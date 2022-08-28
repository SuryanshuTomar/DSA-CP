class Queue {
	constructor() {
		this.max_size = 100001;
		this.front = -1;
		this.rear = -1;
		this.arr = new Array(this.max_size);
	}

	isEmpty() {
		if (this.rear == -1) {
			console.log("Queue is Empty !");
			return true;
		} else {
			return false;
		}
	}

	getSize() {
		let size =
			this.rear == -1 && this.front == -1 ? 0 : this.rear - this.front + 1;
		console.log("Queue size : ", size);
		return size;
	}

	peek() {
		if (this.isEmpty()) {
			return -1;
		}
		console.log("Front of the queue : ", this.arr[this.front]);
		return this.arr[this.front];
	}

	empty() {
		if (this.isEmpty()) {
			return;
		}
		this.front = -1;
		this.rear = -1;
	}

	enqueue(value) {
		if (this.rear >= this.max_size - 1) {
			console.log("Queue is FULL !");
			return;
		}
		if (this.front == -1) {
			this.front++;
		}
		this.rear++;
		this.arr[this.rear] = value;
	}

	dequeue() {
		if (this.isEmpty()) {
			return -1;
		}
		if (this.front == this.rear) {
			this.front = -1;
			this.rear = -1;
		}
		let deletedValue = this.arr[this.front];
		this.arr[this.front] = -1;
		this.front++;
		return deletedValue;
	}

	print() {
		if (this.isEmpty()) {
			return;
		}
		process.stdout.write("[Rear] ");
		for (let i = this.rear; i > this.front; i--) {
			process.stdout.write(`${this.arr[i]}`);
			process.stdout.write(" -> ");
		}
		process.stdout.write(`${this.arr[this.front]}`);
		process.stdout.write(`${" [Front]"}`);
		console.log();
	}
}

function main() {
	const queue = new Queue();
	queue.peek();
	queue.isEmpty();
	queue.getSize();

	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);
	queue.enqueue(40);
	queue.enqueue(50);

	queue.print();
	queue.peek();
	queue.getSize();

	queue.dequeue();
	queue.dequeue();
	queue.print();
	queue.peek();
	queue.getSize();

	queue.empty();
	queue.dequeue();
	queue.print();
	queue.peek();
	queue.getSize();
}

main();
