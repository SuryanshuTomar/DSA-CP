// Leetcode - 1752

#include <iostream>
#include <vector>

using namespace std;

bool isSortedAndRotated(vector<int> &vec){
   int count = 0;

   // Checking if sorted and rotated
   for(int i = 0; i < vec.size() - 1; i++){
      if(vec[i] > vec[i+1]){
         count++;
      }
   }

   // Returing false if not sorted and rotated from both ends
   if(vec[vec.size() - 1] > vec[0]) count++;

   // Returning true if the array is only sorted and if the array is sorted and rotated otherwise false
   // sorted => count < 1
   // sorted and rotated => count = 1
   return count <= 1;
}

int main(){
   vector<int> vec = {7, 1, 3, 6};
   bool result = isSortedAndRotated(vec);
   cout << result << endl;


   return 0;
}