// https://www.codingninjas.com/codestudio/problems/combinations_3625257

#include <bits/stdc++.h>
using namespace std;

void printNestedVector(vector<vector<int>> &result) {
  cout << "{ ";
  for (auto i : result) {
    cout << "{ ";
    for (auto j : i) {
      cout << j << ", ";
    }
    cout << " } ";
  }
  cout << " }" << endl;
}

void findCombinations(int i, int n, int k, vector<int> &processed,
                      vector<vector<int>> &result) {
  if (k == 0) {
    result.push_back(processed);
    return;
  }
  // if the required elements are greater then the element we have left then
  // return
  if (k > n - i + 1)
    return;
  // return if the element is greater than the required element.
  if (i > n)
    return;

  // take the element in subset
  processed.push_back(i);
  findCombinations(i + 1, n, k - 1, processed, result);
  // skip the element in subset
  processed.pop_back();
  findCombinations(i + 1, n, k, processed, result);
}

// TC - O(2^n)
vector<vector<int>> combinations(int n, int k) {
  // Write your code here.
  vector<vector<int>> result = {{}};
  vector<int> processed = {};
  findCombinations(1, n, k, processed, result);

  printNestedVector(result);
  return result;
}

int main() {
  int n = 4;
  int k = 3;
  combinations(n, k);
  return 0;
}