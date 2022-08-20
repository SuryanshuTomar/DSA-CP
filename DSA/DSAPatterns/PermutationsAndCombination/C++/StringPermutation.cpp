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
   findStringPermutations("" ,str, result);
   printVector(result);
   return 0;
}