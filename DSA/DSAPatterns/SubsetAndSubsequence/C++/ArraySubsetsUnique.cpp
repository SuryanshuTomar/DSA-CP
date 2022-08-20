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

void findUniqueSubsetsIterative(vector<vector<int>>& result, vector<int>& nums){
   int start = 0;
   int end = 0;
   for(int j = 0; j < nums.size(); j++){
       // making a copy of given 2-d vector.
      vector<vector<int>> subsetTemp = result; // subsetTemp = {{}}
      for(int i = 0; i < subsetTemp.size(); i++){
         // adding set[i] element to each subset of subsetTemp copied from previous result
         // subsetTemp -> {{},{1},{2},{1,2}}
         // end from subsetTemp -> end index = 3;
         // what current subsetTemp will be after adding the new element at i = 2;
         // subsetTemp -> {{2},{1,2},{2,2},{1,2,2}}
         subsetTemp[i].push_back(nums[j]);
      }
      // So, initializing start to the value of previous end if current and previous element are same.
      start = j > 0 && nums[j] == nums[j - 1] ? end : 0;    
      // end from subsetTemp -> end index = 3; changing the end to current subsetTemp size
      end = subsetTemp.size();
      for(int i = start; i < end; i++){
         // now adding modified subsetTemp to original subset -> only from start to end.
         // start = 2(from previous end which was 2), end = 4(from current subsetTemp which is 4)
         // So in the current iteration loop will only add the element for i=2 and  i=3(which were the elements that are not already present in the original result.)
         result.push_back(subsetTemp[i]);
      }
   }
}
    
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
   // Sorting the nums
   sort(nums.begin(), nums.end());
   vector<vector<int>> result = {{}};
   
   // Iterative Method :
   findUniqueSubsetsIterative(result, nums);
   
   // Recursive Method : 
   // vector<int> processed;
   // findUniqueSubsets(result, processed, nums, 0);

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

// TC and SC - (2^n)
int main(){
   vector<int> vec = {1,1,2,2};
   vector<vector<int>> result = subsetsWithDup(vec);
   printNestedVector(result);
   return 0;
}