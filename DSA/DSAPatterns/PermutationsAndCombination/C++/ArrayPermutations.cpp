#include <bits/stdc++.h>
using namespace std;

// Approach 1 : Using a new vector
// TC - No of permutation * time to create per permutations => O(n * n!)
void findPermutations1(int index, vector<int> processed, vector<int>& unprocessed, vector<vector<int>>& result){
   if(index == unprocessed.size()){
      result.push_back(processed);
      return;
   }
   int num = unprocessed[index];
   for(int i = 0; i <= processed.size(); i++){
      vector<int> newP;
      newP.assign(processed.begin(), processed.begin() + i);
      newP.push_back(num);
      newP.insert(newP.end(), processed.begin() + i, processed.end());
      findPermutations1(index + 1, newP, unprocessed, result);
   }
}
// Approach 2 : By Swapping elements (Better Approach) 
// TC - No of permutation * time to create per permutations => O(n * n!)
void findPermutations2(int index, vector<int> processed, vector<vector<int>>& result){
   if(index == processed.size()){
      result.push_back(processed);
      return;
   }

   for(int i = index; i < processed.size(); i++){
      // "index" is the position on which we are swapping elements for to create permutations
      
      swap(processed[index], processed[i]);
      findPermutations2(index + 1, processed, result);
      // Backtracking for next iteration call
      swap(processed[index], processed[i]);
   }
}
   
vector<vector<int>> permute(vector<int>& nums) {
   vector<vector<int>> result = {};
   vector<int> processed = {};
   // findPermutations1(0, processed, nums, result);
   sort(nums.begin(), nums.end());
   findPermutations2(0, nums, result);
   return result;
}

void printNestedVector(vector<vector<int>>& result){
   cout << "{ ";
   for(auto i: result){
         cout << "{ ";
      for(auto j: i){
         cout << j << ", ";
      }
         cout << " }";
   }
   cout << " }" << endl;
}

int main(){
   vector<int> arr = {1, 2, 1};
   vector<vector<int>> result = {{}};
   result = permute(arr);
   printNestedVector(result);
   return 0;
}