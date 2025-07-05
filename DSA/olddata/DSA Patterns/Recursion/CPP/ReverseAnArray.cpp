#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseArray2(vector<int> &arr, int left, int right){
    if(left >= right) return arr;
    
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    return reverseArray2(arr, left + 1, right - 1);
}

int main(){
   vector<int> arr = {14, 23, 13, 41, 15, 16};
   int m = 2;
   vector<int> arr2 = reverseArray2(arr, m+1, arr.size() - 1);

   cout << "{ ";
   for(auto i: arr2){
      cout << i << ", ";
   }
   cout << " }";
   return 0;
}

// SC - O(n)
// TC - O(n)