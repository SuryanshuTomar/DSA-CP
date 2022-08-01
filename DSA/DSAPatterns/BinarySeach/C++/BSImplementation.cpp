#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> &arr, int find){
   int start = 0;
   int end = arr.size() - 1;

   while(start <= end){
   // Doing start + (end - start) / 2 instead of (start + end) / 2 in order to optimize out solution for larger numbers and stop of integer values(start, end, mid) from overflowing.
   int mid = start + ((end - start) / 2);
      if(find == arr[mid]){
         return mid;
      }
      else if(find < arr[mid]){
         end = mid - 1;
      }
      else {
         start = mid + 1;
      }
   }
   return -1;
}

int main() {
   vector<int> arr = { 2, 3, 4, 5, 6, 7, 8, 9, 11, 14, 19 };
   int find = 11;

   int result = binarySearch(arr, find);
   cout << "Element index : " << result << endl;
}