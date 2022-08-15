#include <iostream>
using namespace std;

bool isPalindrome(string &s){
	// Write your code here.
   if(s == "") return true;
   
   if(s[0] == s[s.size() - 1]){
      string newStr = s.substr(1, s.size() - 2);
      return isPalindrome(newStr);
   } 
   return false;
}

// More Efficient
bool isPalindrome2(string &s, int l, int r){
   if(l >= r) return true;
   if(s[l] != s[r]) return false;
   return isPalindrome2(s, l+1, r-1);
}

int main(){
   string str = "racecar";
   cout << isPalindrome(str) << endl;
   cout << isPalindrome2(str, 0, str.size() - 1);
   return 0;
}

// SC  - O(n)
// TC  - O(n)