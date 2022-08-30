// LeetCode Hard - 
// https://leetcode.com/problems/find-in-mountain-array/

#include <bits/stdc++.h>
using namespace std;

int OrderAgnosticBinarySearch(vector<int>& arr, int start, int end, int target){
   int mid = start + (end - start) / 2;
    if(arr[start] == arr[end]){
      if(target == arr[start]){
         return start;
      }
      else{
         return -1;
      }
   }
   else if (arr[start] < arr[end]){
      while(start <= end){
         if(target == arr[mid]){
            return mid;
         }
         else if(target < arr[mid]){
            end = mid - 1;
         }
         else {
            start = mid + 1;
         }
         mid = start + (end - start) / 2;
      }
   } else {
      while(start <= end){
         if(target == arr[mid]){
            return mid;
         } 
         else if(target < arr[mid]){
            start = mid + 1;
         }
         else {
            end = mid - 1;
         }
         mid = start + (end - start) / 2;
      }
   }
   return -1;
}

vector<int> findPeak(vector<int>& arr){
      int start = 0;
    int end = arr.size() - 1;
        int temp = end;
    while(start < end){
            int mid = start + (end - start) / 2;
            if(arr[mid] > arr[mid + 1]){
                // This means we are in the decreasing part of the array.
                // Doing end = mid and not mid - 1, Because we don't if mid - 1 > mid.
                end = mid;
            }
            else{
                // This means we are in the increasing part of the array.
                // Here we have checked that mid is less than mid + 1, so start = mid + 1
                start = mid + 1;
            }
        }

        // In the end, start == end, start will be equal to end because of the above two checks, Therefore, start and end will point to the peak element in the array. So, we can return either. 
    return {start, arr[start]};
}


// TC -> Time Taken in FInding Peak + Time Taken to search targetin left part of array + Time Taken to search target in right part of the array.
// Tc ->  O(logn) + O(logn) + O(logn) -> 3O(logn) -> O(logn)
int main() {
   // vector<int> arr = {3, 5, 7, 9, 10, 90, 100, 80, 65, 40};
   vector<int> arr = {1, 5, 2};
   int target = 1;
   vector<int> result = findPeak(arr);
   int index = -1;
   
   // Search in the left part of the array (from 0 index till peak index)
   index = OrderAgnosticBinarySearch(arr, 0, result[0], target);
   if(index == -1){
   // If target is not found in the left part of the array then 
   // Search in the right part of the array (from peak index till end index)
      index = OrderAgnosticBinarySearch(arr, result[0], arr.size(), target);
   }
   cout << index << endl;
   return 0;
}



// -----------------------------------------------------------------------------------------------
// LeetCode Solution - 
/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

// class Solution {
// public:
//     int binarySearch(MountainArray& arr, int start, int end, int target){
//      int mid = start + (end - start) / 2;
//     if(arr.get(start) == arr.get(end)){
//       if(target == arr.get(start)){
//          return start;
//       }
//       else{
//          return -1;
//       }
//    }
//    else if (arr.get(start) < arr.get(end)){
//       while(start <= end){
//          if(target == arr.get(mid)){
//             return mid;
//          }
//          else if(target < arr.get(mid)){
//             end = mid - 1;
//          }
//          else {
//             start = mid + 1;
//          }
//          mid = start + (end - start) / 2;
//       }
//    } else {
//       while(start <= end){
//          if(target == arr.get(mid)){
//             return mid;
//          } 
//          else if(target < arr.get(mid)){
//             start = mid + 1;
//          }
//          else {
//             end = mid - 1;
//          }
//          mid = start + (end - start) / 2;
//       }
//    }
//    return -1;
// }

// vector<int> findPeak(MountainArray& arr){
//       int start = 0;
//     int end = arr.length() - 1;
//         int temp = end;
//     while(start < end){
//             int mid = start + (end - start) / 2;
//             if(arr.get(mid) > arr.get(mid + 1)){
//                 // This means we are in the decreasing part of the array.
//                 // Doing end = mid and not mid - 1, Because we don't if mid - 1 > mid.
//                 end = mid;
//             }
//             else{
//                 // This means we are in the increasing part of the array.
//                 // Here we have checked that mid is less than mid + 1, so start = mid + 1
//                 start = mid + 1;
//             }
//         }

//         // In the end, start == end, start will be equal to end because of the above two checks, Therefore, start and end will point to the peak element in the array. So, we can return either. 
//     return {start, arr.get(start)};
// }
//     int findInMountainArray(int target, MountainArray &arr) {
//         vector<int> result = findPeak(arr);
//         int index = -1;
//         index = binarySearch(arr, 0, result[0], target);
//         if(index == -1){
//           index = binarySearch(arr, result[0], arr.length() - 1, target);
//         }
//         return index;
//     }
// };