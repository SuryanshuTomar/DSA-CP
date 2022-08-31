// https://leetcode.com/problems/two-sum/


#include <bits/stdc++.h>
using namespace std;

// Total TC - O(nlogn)
vector<int> twoSum(vector<int>& nums, int target) {
   vector<pair<int,int>> newNums;
   
   /* storing value and index beacause we need index for final answer and
   we are doing sorting besed on values */
   for(int i = 0; i < nums.size(); i++){
      newNums.push_back({nums[i], i});
   }
   
   // Sorting function will take O(nlogn)
   sort(newNums.begin(), newNums.end());
   
   // Two pointers
   int i = 0;
   int j = newNums.size() - 1;
   // while loop will take O(n);
   while(i < j){
      int sum = newNums[i].first + newNums[j].first;
      // if sum of ith element and jth element is equal to target we are done
      if(sum == target){
            return {newNums[i].second, newNums[j].second};
      }
      // if current sum is less than target so we need to increase it
      // if we increase i then sum will increase because array is sorted
         else if(sum < target){
            i++;
      }
      // if current sum is greater than target so we need to decrease it
      // to decrease the sum we need decrease the the value of j since the array is sorted.
      else {
            j--;
      }
   }
   // Returning {-1, -1} if no answer is found
   return {-1, -1};
}



int main(){
   vector<int> nums = {2,7,11,15};
   int target = 9;
   vector<int> result = twoSum(nums, target);
   cout << "{ " << result[0] << ", " <<  result[1] << " }" << endl;
   return 0;
}