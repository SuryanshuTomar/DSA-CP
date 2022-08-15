#include <iostream>
#include <vector>

using namespace std;

vector<int> findTargetByPassingList(vector<int> &arr, int currentIndex, int target, vector<int> &list) {
   if(currentIndex > arr.size() - 1) return list;
   if(arr[currentIndex] == target) list.push_back(currentIndex);
   return findTargetByPassingList(arr, currentIndex + 1, target, list);
}

vector<int> findTargetWithoutPassingList(vector<int> &arr, int currentIndex, int target){
   vector<int> list = {};
   if(currentIndex > arr.size() - 1) return list; 
   if(arr[currentIndex] == target) list.push_back(currentIndex);
   vector<int> partResult = findTargetWithoutPassingList(arr, currentIndex + 1, target);
   // for(auto i: partResult){
   //    list.push_back(i);
   // }
   list.insert(list.end(), partResult.begin(), partResult.end());
   return list;
}

int main(){
   vector<int> arr = {1, 2, 4, 4, 5, 6, 7, 4};
   int target = 4;
   vector<int> list = {};
   vector<int> result = findTargetByPassingList(arr, 0, target, list);
   vector<int> result2 = findTargetWithoutPassingList(arr, 0, target);
   
   cout << "{ ";  
   for(auto i: result){
      cout << i << ", "; 
   }
   cout << "}" << endl;  
   
   cout << "{ ";  
   for(auto i: result2){
      cout << i << ", "; 
   }
   cout << "}";  
   return 0;
}

// SC - O(n)
// TC - O(n)