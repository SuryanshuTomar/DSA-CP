// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

// Steps -
// 1. Find the Pivot = largest number in the rotated array.
// 2. Return Pivot + 1,  pivot + 1 will be the smallest element in the array

#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr) {
  int start = 0;
  int end = arr.size() - 1;
  while (start <= end) {
    int mid = start + (end - start) / 2;

    // if right wali array sorted hoo, to humme sorted part me search nai krna
    // hai unsorted me karna hai kyoki sorted me to sab elements bade hi milenge
    if (arr[mid] < arr[end]) {
      end = mid;
    }
    // e < mid means ki left wali array sorted hai, to hum right wale part me
    // search karenge
    else if (arr[mid] > arr[end]) {
      start = mid + 1;
    }
    // nums[e]==nums[mid], So we will skip the duplicate parts
    else {
      end--;
    }
  }

  // returning end, because at last when the loop break end will be at the
  // pivot.
  return end;
}

// TC - O(logn)
int main() {
  //   vector<int> arr = {3, 4, 5, 6, 7, 8, 0, 1, 2, 3};
  vector<int> arr = {3, 3, 3, 3, 3, 1};
  //   vector<int> arr = {0};
  int pivot = -1;
  int result;
  pivot = findPivot(arr);
  if (pivot == arr.size() - 1)
    result = arr[0];

  result = arr[pivot + 1];
  cout << result << endl;
  return 0;
}
