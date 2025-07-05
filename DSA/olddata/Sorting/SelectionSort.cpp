#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &result) {
  cout << "{ ";
  for (auto i : result) {
    cout << i << ", ";
  }
  cout << " }" << endl;
}

vector<int> selectionSort(vector<int> arr) {
  int size = arr.size();
  for (int i = 0; i < size; i++) {
    // find the max item in the remaining array and swap with its correct index
    int maxIndex = 0;
    int currMax = INT_MIN;
    for (int j = 0; j < size - i; j++) {
      if (arr[j] > currMax) {
        currMax = arr[j];
        maxIndex = j;
      }
    }
    swap(arr[size - i - 1], arr[maxIndex]);
  }

  printVector(arr);
  return arr;
}

// TC - O(n^2)
// Good for sorting small data set
// It is a unstable algorithm
int main() {
  vector<int> arr = {35, 65, 21, 48, 22};
  selectionSort(arr);
  return 0;
}