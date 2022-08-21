#include <bits/stdc++.h>
using namespace std;

// Approach 1 : Using set to check if the previous element is same as  (fast)
void findUniquePermutations1(int index, vector<int> processed, vector<vector<int>>& result){
   if(index == processed.size()){
      result.push_back(processed);
      return;
   }
   set<char> m;
   for(int i = index; i < processed.size(); i++){
      int newIndex = index;
      // checking if the current element in processed is same as the previous one and if yes then skip this iteration.
      // if the iterator for the processed[i] element is found then that mean the element is already present in the set which mean the current iterator will point to the found element and not to the end of the set and therefore in that case we should skip the iteration.
      if(m.find(processed[i]) != m.end()) {
          continue;
      }
      m.insert(processed[i]);
      swap(processed[index], processed[i]);
      findUniquePermutations1(index + 1, processed, result);
      // Backtracking for next iteration call
      swap(processed[index], processed[i]);
   }
}

// Approach 2 : Using Set Data Structure (Slow but easy)
 void findUniquePermutations2(int index, vector<int> processed, set<vector<int>>& result){
   if(index == processed.size()){
      result.insert(processed);
      return;
   }
    
   for(int i = index; i < processed.size(); i++){
      swap(processed[index], processed[i]);
      findUniquePermutations2(index + 1, processed, result);
      // Backtracking for next iteration call
      swap(processed[index], processed[i]);
   }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
   set<vector<int>> result;
   vector<vector<int>> ans;
   vector<int> processed = {};
   sort(nums.begin(), nums.end());

   // First Method :
   // findUniquePermutations1(0, nums, ans);
   
   // Second Method :
   findUniquePermutations2(0, nums, result);
   for(auto i: result){
      ans.push_back(i);
   }

   return ans;
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
   vector<int> arr = {1, 1, 2, 2};
   vector<vector<int>> result = {{}};
   result = permuteUnique(arr);
   printNestedVector(result);
   return 0;
}