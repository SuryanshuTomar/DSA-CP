// LeetCode - 88

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &vec){
   cout << "Vector : ";
   for(auto i : vec){
      cout << i << " ";
   }
   cout << endl;
}

void mergeVector(vector<int> num1, int m, vector<int> num2, int n){
   vector<int> num3;
   int i = 0, j = 0;

   while(i < m && j < n){
      if(num1[i] < num2[j]){
         num3.push_back(num1[i]);
         i++;
      }
      else{
         num3.push_back(num2[j]);
         j++;
      }
   }

   while(i < m){
      num3.push_back(num1[i]);
      i++;
   }
   while(j < n){
      num3.push_back(num2[j]);
      j++;
   }
   printVector(num3);
}

int main(){
   vector<int> num1 = {1, 2, 3, 4, 0, 0, 0};
   int m = 4;
   vector<int> num2 = {2, 5, 6};
   int n = 3;

   mergeVector(num1, m, num2, n);
   return 0;
}


// Another Solution :
//  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
//     {
        
//         int j =0;
//         for(int i=m;i<m+n;i++)
//             nums1[i] = nums2[j++];

//         sort(nums1.begin(),nums1.end());
        
//     }