#include <bits/stdc++.h>

using namespace std;

void findStringPermutations(string processed, string unprocessed, vector<string>& result){
   if(unprocessed.empty()){
      result.push_back(processed);
      return;
   }
   char ch = unprocessed[0];
   for(int i = 0; i <= processed.size(); i++){
      string firstSubstring = processed.substr(0, i);
      string lastSubstring = processed.substr(i, processed.length());
      findStringPermutations(firstSubstring + ch + lastSubstring , unprocessed.substr(1, unprocessed.length()), result);
   }
}

int findStringPermutationsWithCount(string processed, string unprocessed, vector<string>& result){
   if(unprocessed.empty()){
      result.push_back(processed);
      return 1;
   }
   int count = 0;
   char ch = unprocessed[0];
   for(int i = 0; i <= processed.size(); i++){
      string firstSubstring = processed.substr(0, i);
      string lastSubstring = processed.substr(i, processed.length());
      count += findStringPermutationsWithCount(firstSubstring + ch + lastSubstring , unprocessed.substr(1, unprocessed.length()), result);
   }
   return count;
}

void printVector(vector<string>& result){
   cout << "{ ";
   for(auto i: result){
      cout << i << ", ";
   }
   cout << " }" << endl;
}

// TC and SC - O(n!)
int main(){
   string str = "abc";
   vector<string> result;
   // findStringPermutations("" ,str, result);
   int count = findStringPermutationsWithCount("" ,str, result);
   cout << "Permutation Count : " << count << endl;
   printVector(result);
   return 0;
}