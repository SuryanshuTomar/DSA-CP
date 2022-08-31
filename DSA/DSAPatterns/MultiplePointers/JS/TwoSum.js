// => Given an array of sorted numbers and a target sum. Find a pair in the array whose sum is equal to the given target.
// => https://leetcode.com/problems/two-sum/

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
// This Approach also works even if we don't have a sorted array, but the time complexity will take a hit.

// Total TC - O(nlogn)
function twoSum(nums, target) {
	let newNums = [];

	/* storing value and index beacause we need index for final answer and
   we are doing sorting besed on values */
	for (let i = 0; i < nums.length; i++) {
		newNums.push([nums[i], i]);
	}

	// Sorting function will take O(nlogn)
	newNums.sort((a, b) => a - b);

	// Two pointers
	let i = 0;
	let j = newNums.length - 1;
	// while loop will take O(n);
	while (i < j) {
		let sum = newNums[i][0] + newNums[j][0];
		// if sum of ith element and jth element is equal to target we are done
		if (sum == target) {
			return [newNums[i][1], newNums[j][1]];
		}
		// if current sum is less than target so we need to increase it
		// if we increase i then sum will increase because array is sorted
		else if (sum < target) {
			i++;
		}
		// if current sum is greater than target so we need to decrease it
		// to decrease the sum we need decrease the the value of j since the array is sorted.
		else {
			j--;
		}
	}
	// Returning {-1, -1} if no answer is found
	return [-1, -1];
}

function main() {
	const nums = [2, 7, 11, 15];
	const target = 9;
	const result = twoSum(nums, target);
	console.log(result);
}

main();
