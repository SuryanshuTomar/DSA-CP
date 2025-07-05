// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

// Steps -
// 1.  Find the Pivot = largest number in the rotated array.
// 2. Apply Binary Search from 0 till pivot
// 3. Apply Binary Search from pivot + 1 till size of the array.

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target, int start, int end) {
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return -1;
}

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
  // vector<int> arr = {3, 4, 5, 6, 7, 8, 0, 1, 2, 3};
  vector<int> arr = {1};
  int target = 0;
  int index = -1;
  int pivot = findPivot(arr);

  // if we didn't find any pivot then it means array is not rotated
  if (pivot == -1) {
    // just do normal binary search
    index = binarySearch(arr, target, 0, arr.size() - 1);
  }

  // checking if pivot is the target
  if (arr[pivot] == target) {
    return pivot;
  }

  // if pivot is found then, it mean we have 2 ascending arrays
  // applying binary search on the left part of the array, from 0 index till
  // pivot index. Now, if target >= start of the array, No need to search in the
  // right part of the array
  if (target >= arr[0]) {
    index = binarySearch(arr, target, 0, pivot - 1);
  }
  // if target is not found in the left part of the array then search in the
  // left part of the array.
  else {
    // applying binary search on the right part of the array, from pivot index
    // till end index.
    index = binarySearch(arr, target, pivot + 1, arr.size() - 1);
  }

  if (index == -1) {
    cout << "false" << endl;
  } else
    cout << "true" << endl;

  return 0;
}

// -------------------------------------------------------------------------------------------------
// LeetCode Solution -


// APPROACH
// - The idea is the same as the previous one without duplicates.
// - The only difference is that due to the existence of duplicates,
//     - arr[l] == arr[mid] could be possible, the first half could be out of order
//     - (i.e. not in the ascending order, e.g. {3, 1, 2, 3, 3, 3, 3})
//     - we have to deal this case separately.
//     - In that case, it is guaranteed that arr[high] also equal to arr[mid],
//     - so the condition arr[mid] == arr[l] == arr[r] can be checked before the original logic,
//     - if so then move left and right both towards the middle by 1 and repeat.

// ALGORITHM
// - Check for if target == nums[mid], if found return true.
// - With duplicates we can have nums[l] == nums[r] so just update the l and r towards middle.
// - If not than check for first half is that in order (i.e nums[l] <= nums[mid]
//     - check if target is in the range of [left, mid -1], if((nums[l] <= target) && (nums[mid] > target)) and search in it.
// - if not in first half search in second half.
//     - Check if target is in range of [mid + 1, right], if((nums[mid] < target) && (nums[r]>= target)) and search in it.


// CODE WITH EXPLANATION
// 😉😉😉😉Please upvote if it helps 😉😉😉😉
// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int l = 0;
//         int r = nums.size() - 1;
        
//         while(l <= r)
//         {
//   int mid = l + (r - l) / 2;
//   if (nums[mid] == target)
//     return true;
//   // with duplicates we can have this contdition, just update left & right
//   if ((nums[l] == nums[mid]) && (nums[r] == nums[mid])) {
//     l++;
//     r--;
//   }
//   // first half
//   // first half is in order
//   else if (nums[l] <= nums[mid]) {
//     // target is in first  half
//     if ((nums[l] <= target) && (nums[mid] > target))
//       r = mid - 1;
//     else
//       l = mid + 1;
//   }
//   // second half
//   // second half is order
//   // target is in second half
//   else {
//     if ((nums[mid] < target) && (nums[r] >= target))
//       l = mid + 1;
//     else
//       r = mid - 1;
//   }
//         }
//         return false;
// }
// };