#include <iostream>
using namespace std;

bool validChar(char ch){
   if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
      return true;
   }
   return false;
}

char toLowerCase(char ch){
   if (ch >= 'a' && ch <= 'z') {
      return ch;
   }
   else {
      return ch - 'A' + 'a';
   }
}

bool isValidPalindrome(string str){
   int strLen = str.size();
   
   string newStr = "";
   for(auto i: str){
      if(validChar(i)){
         newStr.push_back(i);
      }
   }

   for(int i = 0; i < newStr.size() / 2; i++){
      if(toLowerCase(newStr[i]) != toLowerCase(newStr[newStr.size() - i - 1])){
         return false;
      }
   }
   return true;
}

int main(){
   string str = "A man, a plan, a canal: Panama";

   cout << "Entered string is : " << isValidPalindrome(str) << endl;
   return 0;
}