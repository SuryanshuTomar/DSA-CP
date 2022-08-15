function removeCharachterFromString(s, currentIndex, target, result) {
	if (currentIndex > s.length - 1) return result;
	if (s[currentIndex] != target) result += s[currentIndex];
	return removeCharachterFromString(s, currentIndex + 1, target, result);
}

function main() {
	let str = "baccad";
	let target = "a";
	let result = "";
	console.log(removeCharachterFromString(str, 0, target, result));
	return 0;
}

main();

// SC - O(n);
// TC - O(n);
