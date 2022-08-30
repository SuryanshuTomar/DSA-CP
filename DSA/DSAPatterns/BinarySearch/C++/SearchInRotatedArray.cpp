// https://leetcode.com/problems/search-in-rotated-sorted-array/

// Steps - 
// 1.  Find the Pivot = largest number in the rotated array.
// 2. Apply Binary Search from 0 till pivot
// 3. Apply Binary Search from pivot + 1 till size of the array.

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target, int start, int end){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int findPivot(vector<int> & arr){
   int start = 0;
   int end = arr.size() - 1;
   while(start <= end){
      int mid = start + (end - start) / 2;
      if(mid + 1 < arr.size() && arr[mid] > arr[mid + 1]){
         return mid;
      } 
      else if(mid - 1 >= 0 && arr[mid] < arr[mid - 1]){
         return mid - 1;
      }
      else if(arr[start] >= arr[mid]){
         end = mid - 1;
      }else {
         start = mid + 1;
      }
   }
   return -1;
}

// TC - O(logn)
int main(){
   // vector<int> arr = {3, 4, 5, 6, 7, 8, 0, 1, 2, 3};
   vector<int> arr = {1};
   int target = 0;
   int index = -1;
   int pivot = findPivot(arr);

   // if we didn't find any pivot then it means array is not rotated
   if(pivot == -1){
      // just do normal binary search
      index = binarySearch(arr, target, 0, arr.size() - 1);
   }

   // checking if pivot is the target
   if (arr[pivot] == target){
      return pivot;
   }

   // if pivot is found then, it mean we have 2 ascending arrays
   // applying binary search on the left part of the array, from 0 index till pivot index.
   // Now, if target >= start of the array, No need to search in the right part of the array
   if(target >= arr[0]){
      index = binarySearch(arr, target, 0, pivot - 1);
   }
   // if target is not found in the left part of the array then search in the left part of the array.
   else{
   // applying binary search on the right part of the array, from pivot index till end index.
      index = binarySearch(arr, target, pivot + 1, arr.size() - 1);
   }
   cout << index << endl;
   return 0;
}



// --------------------------------------------------------------------------------------------------------
// LeetCode Solution - 


// class Solution {
// public:
//     int binarySearch(vector<int>& arr, int target, int start, int end){
//     while(start <= end){
//         int mid = start + (end - start) / 2;
//         if(arr[mid] == target){
//             return mid;
//         }
//         else if(target < arr[mid]){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//     return -1;
// }

// int findPivot(vector<int> & arr){
//    int start = 0;
//    int end = arr.size() - 1;
//    while(start <= end){
//       int mid = start + (end - start) / 2;
//       if(mid + 1 < arr.size() && arr[mid] > arr[mid + 1]){
//          return mid;
//       } 
//       else if(mid - 1 >= 0 && arr[mid] < arr[mid - 1]){
//          return mid - 1;
//       }
//       else if(arr[start] >= arr[mid]){
//          end = mid - 1;
//       }else {
//          start = mid + 1;
//       }
//    }
//    return -1;
// }
//     int search(vector<int>& arr, int target) {
//         int index = -1;
//         int pivot = findPivot(arr);

//         // if we didn't find any pivot then it means array is not rotated
//         if(pivot == -1){
//           // just do normal binary search
//           return binarySearch(arr, target, 0, arr.size() - 1);
//         }

//         // checking if pivot is the target
//         if (arr[pivot] == target){
//           return pivot;
//         }

//         // if pivot is found then, it mean we have 2 ascending arrays
//         // applying binary search on the left part of the array, from 0 index till pivot index.
//         // Now, if target >= start of the array, No need to search in the right part of the array
//         if(target >= arr[0]){
//           return binarySearch(arr, target, 0, pivot - 1);
//         }
//         // if target is not found in the left part of the array then search in the left part of the array.
//         else{
//         // applying binary search on the right part of the array, from pivot index till end index.
//           return binarySearch(arr, target, pivot + 1, arr.size() - 1);
//         }
//         return index;
//     }
// };