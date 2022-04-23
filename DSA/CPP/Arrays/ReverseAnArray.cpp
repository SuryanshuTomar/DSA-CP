#include <iostream>
using namespace std;

void swap(int firstIndex, int secondIndex, int arr[]){
   int temp = arr[firstIndex];
   arr[firstIndex] = arr[secondIndex];
   arr[secondIndex] = temp;
}

void reverseArray(int arr[], int length){
   for(int i = 0; i < length/2; i++){
      swap(i, length-i-1, arr);
   }

}

void printArray(int arr[], int length){
   cout << "Array : [ ";
   for(int i=0; i<length; i++){
      cout << arr[i] << " ";
   }
   cout << "]";
}

int main(){
   int arr[] = { 2, 4 ,5, 6, 8, 9, 13, -1 };
   int arrLength = sizeof(arr) / sizeof(int);
   reverseArray(arr, arrLength);
   printArray(arr, arrLength);
   
   return 0;
}