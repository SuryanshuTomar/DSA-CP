#include <iostream>
using namespace std;

int linearSearch(int arr[], int length, int element){
   int index = -1;
   for(int i = 0; i<length; i++){
      if(arr[i] == element){
         index = i;
         return index;
      }
   }
   return index;
}

int main(){
   int arr[] = {5, 7, -2, 10, 22, -5, 0, 6, 45, 1};

   // Checking whether 6 is present in the array or not -
   int arrLength = sizeof(arr) / sizeof(int);
   int answer = linearSearch(arr, arrLength, -6);
   cout << answer << endl;
   return 0;
}