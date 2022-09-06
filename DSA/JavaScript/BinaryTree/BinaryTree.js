class Node {
	constructor(value) {
		this.value = value;
		this.left = null;
		this.right = null;
	}
}

function createBT() {
	// Tree Created
	//       1
	//      / \
	//     2   3
	//    / \   \
	//   4   5   6
	const treeRoot = new Node(1);
	const b = new Node(2);
	const c = new Node(3);
	const d = new Node(4);
	const e = new Node(5);
	const f = new Node(6);
	treeRoot.left = b;
	treeRoot.right = c;
	b.left = d;
	b.right = e;
	c.right = f;

	return treeRoot;
}

function main() {
	console.log(createBT());
}

main();
