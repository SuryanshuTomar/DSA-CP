// https://www.codingninjas.com/codestudio/problems/find-power-of-a-number_893198?leftPanelTab=1

function Pow(X, N) {
	// Write your code here.
	if (N == 0) return 1;
	let temp = Pow(X, N / 2);
	if (N % 2 == 1) return temp * temp * X;
	return temp * temp;
}

Pow(3, 5);

// SC - O(n)
// TC - O(n)
