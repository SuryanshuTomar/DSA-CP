// https://leetcode.com/problems/subsets/ 

#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<int> processed, vector<int> unprocessed, vector<vector<int>>& result, int index){
   if(index == unprocessed.size()){
      result.push_back(processed);
      return;
   }
   // Not taking the element and ignoring it.
   findSubsets(processed, unprocessed, result, index + 1);
   // Taking the element to add to subset
   processed.push_back(unprocessed[index]);
   findSubsets(processed, unprocessed, result, index + 1);
}


// Time Complexity -> iteration for each level(no of level) * no of subsets on each level
// So, TC -> n * 2^n (as number of subsets keeps getting doubled on each level).
// Space Complexity -> no. of subsets on each level * space taken by each findSubsets
// So, SC -> 2^n * n
void findSubsetsIterative(vector<int>& nums, vector<vector<int>>& result){
   for(auto num : nums){
       // making a copy of given 2-d vector.
      vector<vector<int>> subsetTemp = result; // subsetTemp = {{}}
      for(int i = 0; i < subsetTemp.size(); i++){
         // adding set[i] element to each subset of subsetTemp.
         // like adding {1} in 1st iteration(i=0) to {{}} which will give => {{1}}.
         // or like adding {2} in 2nd iteration to {{},{1}} which will give => {{2},{1,2}}.
         subsetTemp[i].push_back(num);
      }
      for(int i = 0; i < subsetTemp.size(); i++){
         // now adding modified subsetTemp to original subset -> 
         //(original->{{},{1}} + subsetTemp->{{2}, {1, 2}} => {{},{1},{2},{1,2}}) 
         result.push_back(subsetTemp[i]);
      }
   }  
}
    
vector<vector<int>> subsets(vector<int>& nums) {
   vector<vector<int>> result = {{}};
   vector<int> processed;

   ///////////////////// Uncomment any one at a time for result : ///////////////
   // findSubsets(processed, nums, result, 0);
   // findSubsetsIterative(nums, result);

   return result;
}


int main(){
   vector<int> vec = {1,2,3};
   vector<vector<int>> result = subsets(vec);
         cout << "{ ";
   for(auto i: result){
         cout << "{ ";
      for(auto j: i){
         cout << j << ", ";
      }
         cout << " }";
   }
         cout << " }" << endl;
   return 0;
}