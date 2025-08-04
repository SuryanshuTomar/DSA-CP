// https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087 

#include <iostream>
#include <vector>
using namespace std;

void findSubsequence(vector<string> &result, string processed, string unprocessed, int index){
   if(index == unprocessed.size()){
      result.push_back(processed);
      return;
   }

   char ch = unprocessed[index];
   // Taking the element to add to subset
   findSubsequence(result, processed + ch, unprocessed, index + 1);
   // Not taking the element and ignoring it.
   findSubsequence(result, processed, unprocessed, index + 1);
}

int main(){
   string unprocessed = "abc";
   string processed = "";
   vector<string> result;
   findSubsequence(result, processed, unprocessed, 0);

   for(auto i: result){
      cout << i << endl;
   }
   cout << endl;
   return 0;
}