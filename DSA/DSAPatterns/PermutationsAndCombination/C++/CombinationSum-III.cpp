// https://www.codingninjas.com/codestudio/problems/combination-sum-iii_5038357

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

void findCombinationSum3(int index, int subsetSize, int sum,
                         vector<int> processed, vector<vector<int>> &result) {
  // if the required elements are greater then ot less then the element we have
  // left then return
  if (subsetSize < 0 || subsetSize > 10 - index + 1)
    return;
  if (subsetSize == 0 && sum == 0) {
    result.push_back(processed);
    return;
  }
  // if sum reaches below zero
  if (sum < 0)
    return;
  // if index is greater than the required element
  if (index > 9)
    return;

  // pick the element
  processed.push_back(index);
  findCombinationSum3(index + 1, subsetSize - 1, sum - index, processed,
                      result);

  // skip the element
  processed.pop_back();
  findCombinationSum3(index + 1, subsetSize, sum, processed, result);
}

vector<vector<int>> combinationSum3(int k, int n) {
  // Write your code here.
  vector<vector<int>> result;
  vector<int> processed;
  findCombinationSum3(1, k, n, processed, result);

  printNestedVector(result);
  return result;
}

int main() {
  int k = 2;
  int n = 5;
  combinationSum3(k, n);

  return 0;
}