// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/]

#include <bits/stdc++.h>
using namespace std;

int findSmallestUnsortedSubarray(vector<int> nums) {
  // O(n) solution
  int n = nums.size();
  int end = -1, start = -1;
  int maxi = nums[0], mini = nums[n - 1];

  for (int i = 1; i < n; i++) {
    // storing the max of the array till index i
    maxi = max(maxi, nums[i]);
    // if the current max is greater than the current element then change the
    // end ptr to i;
    if (nums[i] < maxi)
      end = i;
  }
  for (int i = n - 2; i >= 0; i--) {
    // storing the min of the array till index i
    mini = min(mini, nums[i]);
    // if the current min is lesser than the current element then change the
    // start ptr to i;
    if (nums[i] > mini)
      start = i;
  }

  // if either of the end or start pointer is -1 then it means array is
  // sorted,so return 0
  if (end == -1 || start == -1)
    return 0;

  // return length of the unsorted subarray
  return end - start + 1;
}

// TC - O(n)
int main() {
  cout << findSmallestUnsortedSubarray({1, 3, 2, 0, -1, 7, 10}) << endl;
  cout << findSmallestUnsortedSubarray({1, 2, 5, 7, 3, 10, 11, 12}) << endl;
  cout << findSmallestUnsortedSubarray({1, 2, 3, 3, 3}) << endl;
  cout << findSmallestUnsortedSubarray({4, 3, 2, 1}) << endl;
  cout << findSmallestUnsortedSubarray({12, 7, 8, 1, 2, 0, 10, 11}) << endl;
  return 0;
}