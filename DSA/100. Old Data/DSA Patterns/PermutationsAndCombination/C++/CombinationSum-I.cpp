// https://codingninjas.com/codestudio/problems/combination-sum_981296

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

void findCombinationSum(int index, int sum, vector<int> processed,
                        vector<int> &arr, vector<vector<int>> &result) {
  if (sum == 0) {
    result.push_back(processed);
    return;
  }
  if (sum < 0)
    return;
  if (index > arr.size() - 1)
    return;

  //     skip the element
  //     processed.pop_back();
  findCombinationSum(index + 1, sum, processed, arr, result);

  //     take the element
  processed.push_back(arr[index]);
  findCombinationSum(index, sum - arr[index], processed, arr, result);
}

// TC - O(2^n);
vector<vector<int>> combSum(vector<int> &ARR, int B) {
  // Write your code here
  vector<vector<int>> result = {{}};
  vector<int> processed = {};
  // Return a vector of sorted vectors/combinations
  sort(ARR.begin(), ARR.end());
  findCombinationSum(0, B, processed, ARR, result);
  printNestedVector(result);
  return result;
}

int main() {
  vector<int> arr = {1, 2, 3};
  int B = 5;
  combSum(arr, B);
  return 0;
}