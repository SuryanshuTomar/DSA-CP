let arr1 = [2, 4, 5, 6, 8, 9, 10, 14, 15, 17, 19, 20];
let arr2 = [90, 70, 66, 54, 49, 44, 37, 23, 17, 11, 9, 4, 1];

console.log("Element index : ", orderAgnosticBinarySearch(arr1, 2));
console.log("Element index : ", orderAgnosticBinarySearch(arr2, 90));
console.log("Element index : ", orderAgnosticBinarySearch([3, 3, 3, 3], 3));

function orderAgnosticBinarySearch(arr, element) {
	let start = 0;
	let end = arr.length - 1;

	if (arr[start] === arr[end]) {
		if (element === arr[start]) {
			return start;
		} else {
			return -1;
		}
	} else if (arr[start] < arr[end]) {
		while (start <= end) {
			let mid = Math.floor(start + (end - start) / 2);

			if (element === arr[mid]) {
				return mid;
			} else if (element < arr[mid]) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
	} else {
		while (start <= end) {
			let mid = Math.floor(start + (end - start) / 2);

			if (element === arr[mid]) {
				return mid;
			} else if (element < arr[mid]) {
				start = mid + 1;
			} else {
				end = mid - 1;
			}
		}
	}
	return -1;
}
