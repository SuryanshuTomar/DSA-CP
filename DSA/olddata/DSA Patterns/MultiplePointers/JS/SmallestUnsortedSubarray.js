// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

function findSmallestUnsortedSubarray(nums) {
	let leftPtr = 0;
	let rightPtr = nums.length - 1;
	let prevLeft;
	let prevRight;

	while (leftPtr < rightPtr) {
		// increament the left pointer till we find the element that is greater than the next element in the array.
		if (leftPtr + 1 < nums.length && nums[leftPtr] <= nums[leftPtr + 1]) {
			leftPtr++;
		}
		// decrement the right pointer till we find the element that is smaller than the previous element in the array.
		if (rightPtr > 0 && nums[rightPtr] >= nums[rightPtr - 1]) {
			rightPtr--;
		}

		// if previous leftPtr and prev rightPtr are same as current then break the loop.
		if (prevLeft == leftPtr && prevRight == rightPtr) {
			break;
		}

		// updating the prevLeft and prevRight with current one for the next iteration of loop
		prevLeft = leftPtr;
		prevRight = rightPtr;
	}

	// If leftPtr === rightPtr, then it means that our array is already sorted.
	if (leftPtr === rightPtr) {
		return 0;
	}

	const subArr = nums.slice(leftPtr, rightPtr + 1);
	const subArrMin = Math.min(...subArr);
	const subArrMax = Math.max(...subArr);

	// extending subArr window to the left to include elements that are greater than the subArrMin;
	while (leftPtr > 0 && nums[leftPtr - 1] > subArrMin) {
		leftPtr--;
	}
	// extending subArr window to the right to include elements that are lesser than the subArrMax;
	while (rightPtr + 1 < nums.length && nums[rightPtr + 1] < subArrMax) {
		rightPtr++;
	}

	return rightPtr - leftPtr + 1;
}

// TC - O(n)
function main() {
	console.log(findSmallestUnsortedSubarray([1, 3, 2, 0, -1, 7, 10])); // 5
	console.log(findSmallestUnsortedSubarray([1, 2, 5, 7, 3, 10, 11, 12])); // 3
	console.log(findSmallestUnsortedSubarray([1, 2, 3, 3, 3])); // 0
	console.log(findSmallestUnsortedSubarray([4, 3, 2, 1])); // 4
	console.log(findSmallestUnsortedSubarray([12, 7, 8, 1, 2, 0, 10, 11])); // 8
}

main();
