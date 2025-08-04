#include <bits/stdc++.h>

using namespace std;

void searchPair(vector<int>& arr, vector<vector<int>>& result, int targetSum, int leftPtr, int rightPtr) {
	while (leftPtr < rightPtr) {
		int currentSum = arr[leftPtr] + arr[rightPtr];
      // When the three sum is found then push the three elements in our result array.
		if (currentSum == targetSum) {
			result.push_back({-targetSum, arr[leftPtr], arr[rightPtr]});
			leftPtr++;
			rightPtr--;
      // if there are duplicate elements in the array then move the leftPtr until unique element is found.
			while (leftPtr < rightPtr && arr[leftPtr] == arr[leftPtr - 1]) {
				leftPtr++;
			}
		}
      // if the targetSum is less then our currentSum then move the leftPtr
		else if (currentSum < targetSum) {
			leftPtr++;
      // if the targetSum is more then our currentSum then move the rightPtr
		} else {
			rightPtr--;
		}
	}
}

vector<vector<int>> threeSum(vector<int>& arr) {
	vector<vector<int>> result;

   // Sortin the array, as our technique will work only on sorted arrays.
	sort(arr.begin(), arr.end());

   // Taking the first element as negative and then try to find out the other two elements whose total sum are equal to our negative of first element.
	for (int i = 0; i < arr.size(); i++) {
      // Since, we are only looking for unique elements sum
      // We are skipping all the duplicate elements.
		if (i > 0 && arr[i] == arr[i - 1]) {
			continue;
		}
      // first element
		int targetSum = -arr[i];
      // find the other two elements.
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

// Time Complexity - O(n^2)
int main(){
   vector<int> arr1 = {-1, 0, 1, 2, -1, -1, -4}; // [-2, -1, -1, -1, 0, 1, 1, 2] sorted
	vector<int> arr2 = {0, 0, 0, 0, 0};

   printNestedVector(threeSum(arr1));
	printNestedVector(threeSum(arr2));

   return 0;
}
