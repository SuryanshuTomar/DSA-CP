// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


#include <bits/stdc++.h>
using namespace std;

int findFirstOccurrence(vector<int> arr, int target){
   int start = 0;
   int end = arr.size() - 1;
   int targetCurrentIndex = -1;

   while(start <= end){
   int mid = start + (end - start) / 2;
      if(arr[mid] == target){
         targetCurrentIndex = mid;
         end = mid - 1;
      }
      else if (target < arr[mid]){
         end = mid - 1;
      }
      else{
         start = mid + 1;
      }
   }
   return targetCurrentIndex;
}

int findLastOccurrence(vector<int> arr, int target){
   int start = 0;
   int end = arr.size() - 1;
   int targetCurrentIndex = -1;

   while(start <= end){
   int mid = start + (end - start) / 2;
      if(arr[mid] == target){
         targetCurrentIndex = mid;
         start = mid + 1;
      }
      else if (target < arr[mid]){
         end = mid - 1;
      }
      else{
         start = mid + 1;
      }
   }
   return targetCurrentIndex;
}

// TC - O(logn)
int main() {
    // Write C++ code here
    vector<int> arr = {1, 2, 3, 10, 10, 10, 10, 12, 12, 14};
    int target = 10;
    int firstOccurrence = findFirstOccurrence(arr, target);
    int lastOccurrence = findLastOccurrence(arr, target);
   
    cout << "First : " << firstOccurrence << endl;
    cout << "Second : " << lastOccurrence << endl;
    cout << "Count : " << lastOccurrence - firstOccurrence + 1 << endl;
    return 0;
}