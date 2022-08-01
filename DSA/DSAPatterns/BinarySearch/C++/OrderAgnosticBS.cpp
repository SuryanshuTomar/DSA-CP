#include <iostream>
#include <vector>

using namespace std;

int orderAgnosticBinarySearch(vector<int>, int);

int main(){
   vector<int> arr1 = { 2, 4, 5, 6, 8, 9, 10, 14, 15, 17, 19, 20 };
   vector<int> arr2 = { 90, 70, 66, 54, 49, 44, 37, 23, 17, 11, 9, 4, 1 };
   vector<int> arr3 = { 5, 5, 5, 5, 5, 5, 5 };

   cout << "Element Index : " << orderAgnosticBinarySearch(arr1, 17) << endl;
   cout << "Element Index : " << orderAgnosticBinarySearch(arr2, 37) << endl;
   cout << "Element Index : " << orderAgnosticBinarySearch(arr3, 4) << endl;

   return 0;
}

int orderAgnosticBinarySearch(vector<int> arr, int element){
   int start = 0;
   int end = arr.size() - 1;
   int mid = start + (end - start) / 2;

   if(arr[start] == arr[end]){
      if(element == arr[start]){
         return start;
      }
      else{
         return -1;
      }
   }
   else if (arr[start] < arr[end]){
      while(start <= end){
         if(element == arr[mid]){
            return mid;
         }
         else if(element < arr[mid]){
            end = mid - 1;
         }
         else {
            start = mid + 1;
         }
         mid = start + (end - start) / 2;
      }
   } else {
      while(start <= end){
         if(element == arr[mid]){
            return mid;
         } 
         else if(element < arr[mid]){
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