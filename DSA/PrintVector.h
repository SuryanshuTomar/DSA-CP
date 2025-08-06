#include <iostream>
#include <vector>

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

void printVector(vector<int> &result) {
  cout << "{ ";
  for (auto i : result) {
    cout << i << ", ";
  }
  cout << " }" << endl;
}