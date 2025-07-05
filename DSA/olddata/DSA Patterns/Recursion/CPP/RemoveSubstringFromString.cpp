// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include <iostream>
using namespace std;

string removeOccurrences(string s, string target){
   int targetIndex = s.find(target);
   if(targetIndex == -1) return s;
   s.erase(targetIndex, target.size());
   return removeOccurrences(s, target);
}

string removeOccurrences2(string s, string target){
   int pos {};
   while(s.find(target) != -1){
      pos = s.find(target);
      s.replace(pos, target.length(), "");
   }
   return s;
}

int main(){
   string str = "abcdappledcba";
   string target = "apple";
   cout << removeOccurrences(str, target) << endl;
   cout << removeOccurrences2(str, target) << endl;
   return 0;
}