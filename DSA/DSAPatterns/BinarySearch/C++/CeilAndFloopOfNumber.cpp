// => Find the Ceiling of a Number and Floor of a number in an array ?
// - Ceiling of a Number => This number should be either equal to or smallest number from the array which is greater than the target.
// - Floor of a Number => This number should be either equal to or largest number from the array which is smaller than the target.
// - TC for both functions will be O(logn)

#include <bits/stdc++.h>
using namespace std;

int findCeiling(vector<int>& arr, int target){
   int start = 0;
   int end = arr.size() - 1;
   int result = -1;

   // Edge case
   if(target > arr[end]) return -1;
   
   while(start <= end){
      int mid = start + (end - start) / 2;
      if(arr[mid] == target){
         return mid;
      }
      else if(arr[mid] < target){
         start = mid + 1;
      }
      else {
         end = mid - 1;
      }
   }
   
   // Returning start because while loop will break when start > end and so the start will now point to mid + 1 which will be the smallest number that is bigger than the target.
   return start;
}

int findFloor(vector<int>& arr, int target){
   int start = 0;
   int end = arr.size() - 1;
   int result = -1;

   // Edge case
   if(target < arr[start]) return -1;
   
   while(start <= end){
      int mid = start + (end - start) / 2;
      if(arr[mid] == target){
         return mid;
      }
      else if(arr[mid] < target){
         start = mid + 1;
      }
      else {
         end = mid - 1;
      }
   }
   // Returning end because while loop will break when start > end and so the end will now point to mid - 1 which will be the greatest number that is less than the target.
   return end;
}

int main(){
   vector<int> arr = {2, 3, 5, 9, 14, 16, 17, 19};
   int target = 18;
   int ceil = findCeiling(arr, target);
   int floor = findFloor(arr, target);
   cout << "Ceil from the array : " << ceil << endl;
   cout << "Floor from the array : " << floor << endl;
}