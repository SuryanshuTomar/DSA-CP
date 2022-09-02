// https://leetcode.com/problems/split-array-largest-sum/

#include <bits/stdc++.h>
using namespace std;

int splitArray(vector<int> &nums, int m) {
  int start = 0;
  int end = 0;

  // finding start and end for the binary search
  for (int i = 0; i < nums.size(); i++) {
    start = max(nums[i], start);
    end += nums[i];
  }

  // binary search
  while (start < end) {
    // checking if the mid is the potential ans for largest sum
    int mid = start + (end - start) / 2;

    // calculating how many pieces we can divide the mid into.
    int sum = 0;
    int pieces = 1;
    for (auto num : nums) {
      if (sum + num > mid) {
        sum = num;
        pieces++;
      } else {
        sum += num;
      }
    }

    // if pieces are greater than the required number of subarray m
    // then this means we need to increase the number of pieces as the
    // sum(mid) we have taken now is less.
    if (pieces > m) {
      start = mid + 1;
    }
    // if pieces are less than or equal to required number of subarray m
    // then this means we need to increase the number of pieces as the
    // sum(mid) we have taken now is less or equal.
    else {
      end = mid;
    }
  }
  // return end or start because while will break when when start == end
  return end;
}

int main() {

  vector<int> arr = {7, 2, 5, 10, 8};
  int m = 2;
  cout << splitArray(arr, m) << endl;
  return 0;
}