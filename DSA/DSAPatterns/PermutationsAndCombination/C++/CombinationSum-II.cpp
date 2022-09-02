// https://www.codingninjas.com/codestudio/problems/combination-sum-ii_1112622?

#include <bits/stdc++.h>
using namespace std;

void printNestedVector(vector<vector<int>> &result) {
  cout << "{ ";
  for (auto i : result) {
    cout << "{ ";
    for (auto j : i) {
      cout << j << ", ";
    }
    cout << " }";
  }
  cout << " }" << endl;
}

void findCombinationSum2(int index, int sum, vector<int> processed,
                         vector<int> &arr, vector<vector<int>> &result) {
  if (sum == 0) {
    result.push_back(processed);
    return;
  }
  if (sum < 0)
    return;
  if (index > arr.size() - 1)
    return;

  //     take the element
  processed.push_back(arr[index]);
  findCombinationSum2(index + 1, sum - arr[index], processed, arr, result);

  //     skip the element
  processed.pop_back();
  while (index + 1 < arr.size() && arr[index] == arr[index + 1])
    index++;
  findCombinationSum2(index + 1, sum, processed, arr, result);
}

// TC - O(2^n);
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target) {
  // Write your code here.
  vector<vector<int>> result = {{}};
  vector<int> processed = {};
  sort(arr.begin(), arr.end());
  findCombinationSum2(0, target, processed, arr, result);
  printNestedVector(result);
  return result;
}

int main() {
  vector<int> arr = {1, 2, 3, 1};
  int target = 5;
  combinationSum2(arr, arr.size(), target);

  return 0;
}