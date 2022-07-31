// => Given an array of sorted numbers and a target sum. Find a pair in the array whose sum is equal to the given target.

let arr = [1, 2, 3, 4, 5];
let targetSum = 7;

function findTargetPairSum(arr, targetSum) {
	let resultantPair = [];
	let leftPointer = 0;
	let rightPointer = arr.length - 1;
	while (leftPointer != rightPointer) {
		if (arr[leftPointer] + arr[rightPointer] === targetSum) {
			resultantPair.push(arr[leftPointer], arr[rightPointer]);
			break;
		} else if (arr[leftPointer] + arr[rightPointer] > targetSum) {
			rightPointer--;
		} else {
			leftPointer++;
		}
	}
	return resultantPair;
}

const result = findTargetPairSum(arr, targetSum);
console.log(result);
