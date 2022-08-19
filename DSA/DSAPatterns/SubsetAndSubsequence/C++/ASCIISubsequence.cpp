// https://www.geeksforgeeks.org/subsequences-generated-by-including-characters-or-ascii-value-of-characters-of-given-string/

#include <iostream>
#include <vector>
using namespace std;

vector<string> findASCIISubsequence(vector<string>& result, string processed, string unprocessed, int index){
   if(index == unprocessed.size()){
      result.push_back(processed);
      return result;
   }

   char ch = unprocessed[index];
   findASCIISubsequence(result, processed, unprocessed, index + 1);
   findASCIISubsequence(result, processed + ch, unprocessed, index + 1);
   findASCIISubsequence(result, processed + to_string(int(ch)), unprocessed, index + 1);
   return result;
}


int main(){
   string unprocessed = "abc";
   string processed = "";
   vector<string> result;
   findASCIISubsequence(result, processed, unprocessed, 0);
   for(auto i: result){
      cout << i << endl;
   }
   cout << endl;
   return 0;
}