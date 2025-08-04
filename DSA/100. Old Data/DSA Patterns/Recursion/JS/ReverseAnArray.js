function reverseArray(arr, left, right) {
	if (left >= right) return arr;

	let temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
	return reverseArray(arr, left + 1, right - 1);
}

function main() {
	let arr = [12, 43, 54, 46, 56, 78];
	let m = 2;
	console.log(reverseArray(arr, m + 1, arr.length - 1));
}

main();

// SC - O(n)
// TC - O(n)