// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397

#include <iostream>
using namespace std;

int findDuplicate(int arr[], int length) {
    // Write your code here
	int ans = 0;	
	for(int i = 0; i < length; i++){
		ans ^= arr[i];
	}
	
	for(int i = 0; i < length; i++){
		ans ^= i;
	}
	return ans;
}



int main(){
   int arr[] = {1, 2, 3, 4, 4 ,5};
   int arrLength = sizeof(arr) / sizeof(int);
   int result = findDuplicate(arr, arrLength);
   cout << result << endl;
   return 0;
}