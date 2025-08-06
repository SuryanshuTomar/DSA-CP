// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

#include "../../PrintVector.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> getTwoSum(vector<int> &numbers, int target) {
  vector<int> result = {-1, -1};
  int start = 0, end = numbers.size() - 1;

  while (start <= end) {
    int sum = numbers[start] + numbers[end];
    if (sum == target) {
      result[0] = start + 1;
      result[1] = end + 1;
      return result;
    } else if (sum < target)
      start++;
    else
      end--;
  }

  return result;
}

int main() {
  vector<int> numbers = {2, 7, 11, 15};
  int target = 9;

  vector<int> result = getTwoSum(numbers, target);
  printVector(result);
}

// TC - O(n)
// SC - O(1)
// Note: The indices in the result are 0-based as per the problem statement.