// https://www.codingninjas.com/codestudio/problems/factorial-of-a-number_1115779?leftPanelTab=1

function findFactorial(num) {
	if (num == 0) {
		return 1;
	}
	return num * findFactorial(num - 1);
}

function main() {
	let n = 5;
	if (n < 0) {
		console.log("Error");
	} else {
		console.log(findFactorial(n));
	}
}

main();
