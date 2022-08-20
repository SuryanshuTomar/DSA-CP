#include <bits/stdc++.h>

using namespace std;

void findUniqueSubsets(vector<vector<int>>& result, vector<int> processed, vector<int> unprocessed, int index){
   if(index == unprocessed.size()){
      result.push_back(processed);
      return;
   }
   // Method 1 :
   int newIndex = index;
   while(index + 1 < unprocessed.size() && unprocessed[index] == unprocessed[index + 1]) index++;
   findUniqueSubsets(result, processed, unprocessed, index + 1);
   
   processed.push_back(unprocessed[index]);
   findUniqueSubsets(result, processed, unprocessed, newIndex + 1);  

   // Method 2 :
   // processed.push_back(unprocessed[index]);
   // findUniqueSubsets(result, processed, unprocessed, index + 1);  
   // processed.pop_back();
   // while(index + 1 < unprocessed.size() && unprocessed[index] == unprocessed[index + 1]) index++;
   // findUniqueSubsets(result, processed, unprocessed, index + 1);
}
    
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
   // Sorting the nums
   sort(nums.begin(), nums.end());
   
   vector<vector<int>> result;
   vector<int> processed;
   findUniqueSubsets(result, processed, nums, 0);
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
   vector<int> arr = {1, 2, 2};
   vector<vector<int>> result = subsetsWithDup(arr);
   printNestedVector(result);
   return 0;
}