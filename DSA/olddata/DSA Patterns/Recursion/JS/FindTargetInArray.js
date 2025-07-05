function findTargetByPassingList(arr, currentIndex, target, list) {
	if (currentIndex > arr.length - 1) return list;
	if (arr[currentIndex] == target) list.push(currentIndex);
	return findTargetByPassingList(arr, currentIndex + 1, target, list);
}

function findTargetWithoutPassingList(arr, currentIndex, target) {
	let list = [];
	if (currentIndex > arr.length - 1) return list;
	if (arr[currentIndex] == target) list.push(currentIndex);

	let partialAns = findTargetWithoutPassingList(arr, currentIndex + 1, target);
	list = [...list, ...partialAns];
	return list;
}

function main() {
	let arr = [1, 2, 4, 4, 5, 5, 6, 7];
	let target = 5;
	let result = [];
	console.log(findTargetByPassingList(arr, 0, target, result));
	console.log(findTargetWithoutPassingList(arr, 0, target));
}

main();

// SC - O(n)
// TC - O(n)
