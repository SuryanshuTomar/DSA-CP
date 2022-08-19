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
    
vector<vector<int>> subsets(vector<int>& nums) {
   vector<vector<int>> result;
   vector<int> processed;
   findSubsets(processed, nums, result, 0);
   return result;
}


int main(){
   vector<int> vec = {1,2,3};
   vector<vector<int>> result = subsets(vec);
   for(auto i: result){
         cout << endl;
      for(auto j: i){
         cout << j << ", ";
      }
   }
   return 0;
}