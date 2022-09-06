// Binary Tree Iterative Depth First Values

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

function makeTreeDepthFirst(root) {
	if (root === null) return [];

	const result = [];
	const stack = [root];

	while (stack.length > 0) {
		const currentNode = stack.pop();
		result.push(currentNode.value);

		if (currentNode.right) stack.push(currentNode.right);
		if (currentNode.left) stack.push(currentNode.left);
	}
	return result;
}

function main() {
	const root = createBT();

	// Depth First Search in the tree
	console.log(makeTreeDepthFirst(root));
}

main();
