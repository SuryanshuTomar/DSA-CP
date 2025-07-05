// https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/
// Hint : No of times array is rotated = index of the minimum element in a sorted array.

// Steps - 
// 1.  Find the Pivot = largest number in the rotated array.
// 2. Return Pivot + 1,  pivot + 1 will be the smallest element in the array and hence its index will be the number of times the array is rotated.

#include <iostream>
#include <vector>
using namespace std;

int findNoOfTimesArrayIsRotated(vector<int>& arr){
    int start = 0;
   int end = arr.size() - 1;
   while(start <= end){
      int mid = start + (end - start) / 2;
      if(mid + 1 < arr.size() && arr[mid] > arr[mid + 1]){
         // pivot is the largest number and we have return the smallest number index because
         // the index of the smallest number is the number of times the array is rotated
         // so mid is our pivot and we will return mid + 1.
         return mid + 1;
      } 
      else if(mid - 1 >= 0 && arr[mid] < arr[mid - 1]){
         // pivot is the largest number and we have return the smallest number index because
         // the index of the smallest number is the number of times the array is rotated
         // so mid is our pivot and we will return (mid - 1) + 1 => mid.
         return mid;
      }
      else if(arr[start] >= arr[mid]){
         end = mid - 1;
      }else {
         start = mid + 1;
      }
   }
   return -1;
}

int main(){
   vector<int> arr = {15, 17, 18, 1,  2, 5, 6, 8, 9};
   int noOfRotation = findNoOfTimesArrayIsRotated(arr);
   cout << noOfRotation << endl;
   return 0;
}