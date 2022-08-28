class Stack {
	constructor(size) {
		this.size = size;
		this.arr = new Array(this.size);
		this.top = -1;
	}

	getSize() {
		console.log("Stack Size : ", this.top + 1);
		return this.top + 1;
	}

	peek() {
		console.log("Top Element is : ", this.arr[this.top]);
		return this.arr[this.top];
	}

	isEmpty() {
		if (this.top == -1) {
			console.log("Stack is Empty !");
			return true;
		} else {
			console.log(" Stack is not Empty !");
			return false;
		}
	}

	empty() {
		this.top = -1;
		console.log("Emptied  Stack !");
	}

	push(value) {
		if (this.top >= this.size - 1) {
			console.log("Stack Overflow : Size Limit Exceeded !!");
			return;
		}
		this.top++;
		this.arr[this.top] = value;
	}

	pop() {
		if (this.isEmpty()) {
			return -1;
		}
		let deletedValue = this.arr[this.top];
		this.top--;
		return deletedValue;
	}

	printStack() {
		if (this.isEmpty()) {
			console.log("-> X");
			return;
		}
		console.log();
		console.log("Stack : ");
		process.stdout.write(" -> ");
		console.log(`${this.arr[this.top]}`);
		for (let i = this.top - 1; i >= 0; i--) {
			console.log(`    ${this.arr[i]}`);
		}
		console.log();
	}
}

function main() {
	const stack = new Stack(5);
	stack.isEmpty();

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	stack.peek();
	stack.getSize();
	stack.isEmpty();
	stack.printStack();

	stack.empty();
	stack.printStack();

	stack.push(6);
	stack.push(7);
	stack.push(8);
	stack.push(9);
	stack.push(10);
	stack.printStack();

	stack.pop();
	stack.printStack();
	stack.peek();
	stack.getSize();
	return 0;
}

main();
