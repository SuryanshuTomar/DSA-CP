#include <iostream>
using namespace std;

int getCharArrayLength(char str[]){
   // Finding the length of charachter array
   int len {0};
   int i {0};
   while(str[i++] != '\0') len++;
 
   return len;
}

char toLowerCase(char ch){
   if (ch >= 'a' && ch <= 'z') {
      return ch;
   }
   else {
      return ch - 'A' + 'a';
   }
}

bool checkPalindrome(char str[]){
   int len = getCharArrayLength(str);
   for(int i = 0; i < len / 2; i++){
      if(str[i] != str[len - i - 1]) return false;
   }
   return true;
}

bool checkCaseSensitivePalindrome(char str[]){
   int len = getCharArrayLength(str);
   for(int i = 0; i < len / 2; i++){
       if(toLowerCase(str[i]) != toLowerCase(str[len - i - 1])) return false;
   }
   return true;
}

int main(){
   char str[] = "Abcdefedcba";

   cout << "Entered string is : " << checkPalindrome(str) << endl;
   cout << "Entered string is : " << checkCaseSensitivePalindrome(str) << endl;
   return 0;
}