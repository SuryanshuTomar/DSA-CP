// https://leetcode.com/problems/search-insert-position/description/

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target) {
  int start = 0, end = nums.size() - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (target == nums[mid])
      return mid;
    else if (target < nums[mid])
      end = mid - 1;
    else
      start = mid + 1;
  }

  return start;
  // Now this is where both the start and end points to the same position and if
  // until the end of the loop, we haven't found the target, it means that the
  // target should be inserted at the start position. This is because if the
  // target is greater than all elements, start will be at the end of the array,
  // and if it is less than all elements, start will be at the beginning of the
  // array. So, we can return either start or end, as they will be equal at this
  // point.
}

int main() {
  vector<int> input = {1, 3, 5, 6};
  int target = 5;

  cout << searchInsert(input, target) << endl;
}

// TC - O(n)
// SC - O(1)
// Where n is the size of the input array.