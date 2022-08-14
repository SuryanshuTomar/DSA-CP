// https://www.codingninjas.com/codestudio/problems/nth-fibonacci-number_74156

function findFibonacci(n) {
	if (n == 2 || n == 1) {
		return 1;
	}
	return findFibonacci(n - 1) + findFibonacci(n - 2);
}

function main() {
	let n = 8;
	console.log(findFibonacci(n));
}

main();

// SC - O(n)
// TC - O(2^n)