let arr = [3, 4, 6, 8, 9, 20, 24, 64, 76, 79, 89, 94];
let element = 6;

const result = binarySearch(arr, element);
console.log("Element index : ", result);

function binarySearch(arr, element) {
	let start = 0;
	let end = arr.length - 1;

	while (start <= end) {
		// Doing start + (end - start) / 2 instead of (start + end) / 2 in order to optimize out solution for larger numbers and stop of integer values from overflowing
		let mid = Math.floor(start + (end - start) / 2);

		if (element == arr[mid]) {
			return mid;
		} else if (element < arr[mid]) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	return -1;
}
