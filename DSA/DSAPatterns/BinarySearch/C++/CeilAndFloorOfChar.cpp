#include <bits/stdc++.h>
using namespace std;

char findCeilChar(vector<char>& arr, char target){
   int start = 0;
   int end = arr.size() - 1;

   if(target > arr[end]) return arr[start];
   
   while(start <= end){
      int mid = start + (end - start) / 2;
      if(arr[mid] == target){
         if(mid + 1 > arr.size() -1){
             return arr[0];
         }else{
             start = mid+1;
         }
      } 
      else if(arr[mid] < target){
         start = mid + 1;
      }
      else{
         end = mid - 1;
      }
   }
   return arr[start];
    
}

char findFloorChar(vector<char>& arr, char target){
   int start = 0;
   int end = arr.size() - 1;
   
   if(target < arr[start]) return arr[start];

   while(start <= end){
      int mid = start + (end - start) / 2;
      if(arr[mid] == target){
         if(mid-1 < 0){
            return arr[0];
         }
         else{
            end = mid - 1; 
         }
      } 
      else if(arr[mid] < target){
         start = mid + 1;
      }
      else{
         end = mid - 1;
      }
   }
   return arr[end];
}


// TC - O(logn)
int main(){
   vector<char> arr = {'b', 'c', 'd', 'n', 's'};
   char target = 'n';
   char ceil = findCeilChar(arr, target);
   char floor = findFloorChar(arr, target);
   cout << "Char Ceil : " << ceil << endl;
   cout << "Char Floor : " << floor << endl;
   return 0;
}