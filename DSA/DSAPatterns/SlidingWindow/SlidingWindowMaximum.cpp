//  Sliding Window Maximum
// https://leetcode.com/problems/sliding-window-maximum/

#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k) {
  // queue for maintaining the max number in window
  queue<int> maxQ;
  // result vector
  vector<int> result;
  // size of nums
  int n = nums.size();

  if (k == 1)
    return nums;

  int left = 1;
  int right = 0;
  int currentMax = 0;
  int secondMax = 0;

  vector<int> firstWindow(nums.begin(), nums.begin() + k);
  sort(firstWindow.begin(), firstWindow.end());

  while (right < firstWindow.size()) {
    secondMax = currentMax;
    currentMax = max(firstWindow[right], currentMax);
    right++;
  }

  if (nums[0] == currentMax) {
    result.push_back(currentMax);
    currentMax = secondMax;
    maxQ.push(secondMax);
  } else{
    result.push_back(currentMax);
    maxQ.push(currentMax);
  }

  while (right < n) {
    if (nums[right] > maxQ.front()) {
      currentMax = nums[right];
      maxQ.push(currentMax);
    } else {
      if (nums[left] == currentMax) {
        maxQ.pop();
      }
      result.push_back(currentMax);
      left++;
      right++;
    }
  }
  return result;
}

int main() {
  vector<int> arr = {1, 3, 1, 2, 0, 5};
  int k = 3;
  vector<int> result = maxSlidingWindow(arr, k);

  cout << " { ";
  for (int j : result) {
    cout << j << " ";
  }
  cout << "} " << endl;
  return 0;
}