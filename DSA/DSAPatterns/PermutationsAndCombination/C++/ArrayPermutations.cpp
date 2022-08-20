#include <bits/stdc++.h>
using namespace std;

void findPermutations(int index, vector<int> processed, vector<int>& unprocessed, vector<vector<int>>& result){
   if(index == unprocessed.size()){
      result.push_back(processed);
      return;
   }
   // Approach 1 : Using a new vector
   // int num = unprocessed[index];
   // for(int i = 0; i <= processed.size(); i++){
   //    vector<int> newP;
   //    newP.assign(processed.begin(), processed.begin() + i);
   //    newP.push_back(num);
   //    newP.insert(newP.end(), processed.begin() + i, processed.end());
   //    findPermutations(index + 1, newP, unprocessed, result);
   // }

   
}
   
vector<vector<int>> permute(vector<int>& nums) {
   vector<vector<int>> result = {};
   vector<int> processed = {};
   findPermutations(0, processed, nums, result);
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
   vector<int> arr = {1, 2, 3};
   vector<vector<int>> result = {{}};
   result = permute(arr);
   printNestedVector(result);
   return 0;
}