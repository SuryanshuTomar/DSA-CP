// 
// No of times array is rotated = index of the minimum element in a sorted array.

#include <iostream>
#include <vector>
using namespace std;

int findNoOfTimesArrayIsRotated(vector<int>& arr){
   int start = 0;
   int size = arr.size();
   int end = size - 1;
   int result = -1;

   if(arr[start] <= arr[end]){
      return start;
   }

   while(start <= end){
   int mid = start + (end - start) / 2;
      // We are taking modulo here in case mid reaches end index then mid + 1 will be out of bound, This modulo will set the next to 0 index instead of out of bound.
      int next = (mid + 1) % size;
      // We are taking modulo here in case mid reaches 0 index then mid - 1 will be negative, This modulo will set the prev to end index instead of out of bound.
      int prev = (mid - 1 + size) % size;

      if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]){
         result = mid;
         return result;
      }
      else if(arr[start] <= arr[mid]){
         start = mid + 1;
      }else {
         end = mid - 1;
      }
   }
   return result;
}

int main(){
   vector<int> arr = {11, 12, 14, 18 ,2, 5, 6, 8};
   int noOfRotation = findNoOfTimesArrayIsRotated(arr);
   cout << noOfRotation << endl;
   return 0;
}