// => Given an array of sorted numbers and a target sum. Find a pair in the array whose sum is equal to the given target.

// -------------------------------------------------------------------------------------------------
// -> Approach One -
// let arr = [1, 2, 3, 4, 5];
// let targetSum = 7;

// function findTargetPairSum(arr, targetSum) {
// 	let resultantPair = [];
// 	let leftPointer = 0;
// 	let rightPointer = arr.length - 1;
// 	while (leftPointer != rightPointer) {
// 		if (arr[leftPointer] + arr[rightPointer] === targetSum) {
// 			resultantPair.push(arr[leftPointer], arr[rightPointer]);
// 			break;
// 		} else if (arr[leftPointer] + arr[rightPointer] > targetSum) {
// 			rightPointer--;
// 		} else {
// 			leftPointer++;
// 		}
// 	}
// 	return resultantPair;
// }

// console.log(findTargetPairSum(arr, targetSum));
// console.log(findTargetPairSum([1, 6, 8, 9, 10], 14));
// console.log(findTargetPairSum([1, 3, 4, 6, 8, 10], 12));
// console.log(findTargetPairSum([1, 2, 3, 4, 15], 10));

// --------------------------------------------------------------------------------------------------
// -> Approach Two -
// Note: In this approach we will return the total number pairs of the target sum possible in the sorted Array.

