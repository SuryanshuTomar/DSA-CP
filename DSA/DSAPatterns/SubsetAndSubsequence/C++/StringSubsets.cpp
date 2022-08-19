// https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087 

#include <iostream>
#include <vector>
using namespace std;

void findSubsets(vector<string> &result, string processed, string unprocessed, int index){
   if(index == unprocessed.size()){
      result.push_back(processed);
      return;
   }

   char ch = unprocessed[index];
   // Taking the element to add to subset
   findSubsets(result, processed + ch, unprocessed, index + 1);
   // Not taking the element and ignoring it.
   findSubsets(result, processed, unprocessed, index + 1);
}

int main(){
   string unprocessed = "abc";
   string processed = "";
   vector<string> result;
   findSubsets(result, processed, unprocessed, 0);

   for(auto i: result){
      cout << i << endl;
   }
   cout << endl;
   return 0;
}