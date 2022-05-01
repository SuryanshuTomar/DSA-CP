#include <bits/stdc++.h>
using namespace std;

string checkPalindrome(string str){
   for(int i = 0; i < str.size(); i++){
         if(str[i] != str[str.size() - i - 1]){
            return str + " is not palindrome";
         }
      }
   return str + " is palindrome";  
}

int main(){
   string str;
   cout << "Enter the string : ";
   getline(cin, str);
   cout << checkPalindrome(str) << endl;

   return 0;
}