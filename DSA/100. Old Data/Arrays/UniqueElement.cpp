// https://www.codingninjas.com/codestudio/problems/find-unique_625159

#include <iostream>
using namespace std;

// Brute Force - 
// int findUnique(int *arr, int size){ 
//    int count = 0;

//    for(int i=0;i<size;i++){
//       count=0;
//       for(int j=0;j<size;j++){
//          if(arr[i]==arr[j])
//             count++;
//       }

//       if(count==1){
//          return arr[i];
//       }
//    }
//    return 0;
// }

// Optimized Approach -
int findUnique(int *arr, int size)
{
    //Write your code here
	int ans = 0;
	for(int i = 0; i < size; i++){
		ans ^= arr[i];
	}
	return ans;
}

int main(){
   int arr[] = {2, 3, 1, 6, 2, 6, 3};
   int arrLength = sizeof(arr) / sizeof(int);
   int result = findUnique(arr, arrLength);
   cout << result << endl;
   
   return 0;
}


