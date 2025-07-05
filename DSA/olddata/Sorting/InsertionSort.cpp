#include <bits/stdc++.h>
using namespace std;

// In selection sort, the inner loop is over the unsorted elements. Each pass
// selects one element, and moves it to its final location (at the current end
// of the sorted region). In insertion sort, each pass of the inner loop
// iterates over the sorted elements.

void printVector(vector<int> &result) {
  cout << "{ ";
  for (auto i : result) {
    cout << i << ", ";
  }
  cout << " }" << endl;
}

vector<int> selectionSort(vector<int> arr) {
  int size = arr.size();
  for (int i = 0; i < size - 1; i++) {
    // sorting till i part of the array
    for (int j = i + 1; j > 0; j--) {
      // swap if the previous elment in the sorted part of the array is less
      // then the current element
      if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      }
    }
  }

  printVector(arr);
  return arr;
}

// TC - O(n^2) worst case and O(n) for already sorted array.
// Works good for data sets that are partially sorted
// That's why this algorithm takes part in hybrid sorting algorithms
// This is a stable sorting algorithm
int main() {
  vector<int> arr = {35, 65, 21, 48, 22};
  selectionSort(arr);
  return 0;
  return 0;
}