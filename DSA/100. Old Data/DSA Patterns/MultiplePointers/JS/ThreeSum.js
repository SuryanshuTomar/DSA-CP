function threeSum(arr, sum) {
	const result = [];
	arr.sort((a, b) => a - b);
	for (let i = 0; i < arr.length; i++) {
		if (i > 0 && arr[i] == arr[i - 1]) {
			continue;
		}
		let targetSum = -arr[i];
		searchPair(arr, result, targetSum, i + 1, arr.length - 1);
	}
	return result;
}

function searchPair(arr, result, targetSum, leftPtr, rightPtr) {
	while (leftPtr < rightPtr) {
		let currentSum = arr[leftPtr] + arr[rightPtr];
		if (currentSum == targetSum) {
			result.push([-targetSum, arr[leftPtr], arr[rightPtr]]);
			leftPtr++;
			rightPtr--;
			while (leftPtr < rightPtr && arr[leftPtr] == arr[leftPtr - 1]) {
				leftPtr++;
			}
		}
		else if (currentSum < targetSum) {
			leftPtr++;
		} else {
			rightPtr--;
		}
	}
}

function main() {
	const arr1 = [-1, 0, 1, 2, -1, -1, -4]; // [-2, -1, -1, -1, 0, 1, 1, 2] sorted
	const arr2 = [0, 0, 0, 0, 0];
	let sum = 0;
	console.log(threeSum(arr1, sum));
	console.log(threeSum(arr2, sum));
}

main();
