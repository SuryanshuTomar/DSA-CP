#include <bits/stdc++.h>

using namespace std;

void searchPair(vector<int>& arr, vector<vector<int>>& result, int targetSum, int leftPtr, int rightPtr) {
	while (leftPtr < rightPtr) {
		int currentSum = arr[leftPtr] + arr[rightPtr];
		if (currentSum == targetSum) {
			result.push_back({-targetSum, arr[leftPtr], arr[rightPtr]});
			leftPtr++;
			rightPtr--;
			while (leftPtr < rightPtr && arr[leftPtr] == arr[leftPtr - 1]) {
				leftPtr++;
			}
		}
		else if (currentSum < targetSum) {
			leftPtr++;
		} else {
			rightPtr--;
		}
	}
}

vector<vector<int>> threeSum(vector<int>& arr) {
	vector<vector<int>> result;
	sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++) {
		if (i > 0 && arr[i] == arr[i - 1]) {
			continue;
		}
		int targetSum = -arr[i];
		searchPair(arr, result, targetSum, i + 1, arr.size() - 1);
	}
	return result;
}

void printNestedVector(vector<vector<int>> arr){
   cout << "{ ";
   for(auto i : arr){
      cout << "{ ";
      for(auto j: i){
         cout << j << ", ";
      }
      cout << "} ";
   }
   cout << "}" << endl;
}

int main(){
   vector<int> arr1 = {-1, 0, 1, 2, -1, -1, -4}; // [-2, -1, -1, -1, 0, 1, 1, 2] sorted
	vector<int> arr2 = {0, 0, 0, 0, 0};

   printNestedVector(threeSum(arr1));
	printNestedVector(threeSum(arr2));
   
   return 0;
}
