// https://practice.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
public:
  // Function returns the second
  // largest elements
  int print2largest(int arr[], int n) {
    if (n == 1)
      return -1;

    //  int large = INT_MIN, second_large = INT_MIN;
    //  int i;
    //  for (i = 0; i < n; i++) {
    //    if (arr[i] > large) {
    //      second_large = large;
    //      large = arr[i];
    //    } else if (arr[i] > second_large && arr[i] != large) {
    //      second_large = arr[i];
    //    }
    //  }
    // If all the elements in the array are same then there is not any second
    // largest element and second_large variable will have stored the INT_MIN
    // value and in that case return -1.
    //  return second_large == INT_MIN ? -1 : second_large;
  }
};