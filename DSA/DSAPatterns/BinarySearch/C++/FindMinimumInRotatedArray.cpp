// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// Steps - 
// 1.  Find the Pivot = largest number in the rotated array.
// 2. Return Pivot + 1,  pivot + 1 will be the smallest element in the array

#include <bits/stdc++.h>
using namespace std;

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
   vector<int> arr = {3, 4, 5, 6, 7, 8, 0, 1, 2, 3};
   int pivot = -1;
   int result;
   pivot = findPivot(arr);
        if(pivot == arr.size() - 1)
            result = arr[0];
        
        result =  arr[pivot + 1];
   cout << result << endl;
   return 0;
}

