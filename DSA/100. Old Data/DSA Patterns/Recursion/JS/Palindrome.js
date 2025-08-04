function isPalindrome(str, left, right) {
	if (left >= right) return true;
	if (str[left] != str[right]) return false;
	return isPalindrome(str, left + 1, right - 1);
}

function main() {
	let str = "stoots";
	console.log(isPalindrome(str, 0, str.length - 1));
}

main();

// SC  - O(n)
// TC  - O(n)