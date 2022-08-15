// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

function removeOccurrence(str, target) {
	if (!str.includes(target)) return str;
	str = str.replace(target, "");
	return removeOccurrence(str, target);
}

function removeOccurrence2(str, target) {
	while (str.includes(target) != false) {
		str = str.replace(target, "");
	}
	return str;
}

function main() {
	let str = "abbcapplecbba";
	let target = "apple";
	console.log(removeOccurrence(str, target));
	console.log(removeOccurrence2(str, target));
}

main();

// SC - O(n)
// TC - O(n)