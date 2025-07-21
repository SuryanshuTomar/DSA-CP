// https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
  unordered_set<int> hash;
  for (int num : nums) {
    if (hash.count(num))
      return true;
    else
      hash.insert(num);
  }
  return false;
}

int main() {
  vector<int> nums1 = {1, 2, 3, 1};
  vector<int> nums2 = {1, 2, 3, 4};
  vector<int> nums3 = {1, 1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

  bool result = containsDuplicate(nums1);
  cout << result << endl;
}

// TC: O(n)
// SC: O(n)