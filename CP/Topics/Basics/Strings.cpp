#include <bits/stdc++.h>

int main(){
   // 1. Taking Input
   // std::string str1 = "Hello";
   // std::cout << str1 << std::endl;

   // std::string str2;
   // std::cout << "Enter String Input : " << std::endl;
   // std::cin >> str2;
   // std::cout << str2 << std::endl;

   // 2. String Concatination
   // std::string str3, str4;
   // str3 = "Hello ";
   // str4 = "World ";
   // std::cout << str3 + str4 << std::endl;

   // 3. String Compare
   // if(str1 == str2){
   //    std::cout << "Equal" << std::endl;
   // }
   // else{
   //    std::cout << "Not Equal" << std::endl;
   // }

   // 4. String character Access
   // std::string str5 = "DEathSlayer";
   // str5[1] = 'e';
   // std::cout << str5 << std::endl;

   // 5. String size and Looping
   // std::string str6 = "Alex Mercer";
   // for(int i = 0; i < str6.size(); i++){
   //    std::cout << str6[i] << std::endl;
   // }

   // 6. Taking string input with space
   // std::string str7;
   // std::cout << "Enter Input : ";
   // getline(std::cin, str7);
   // std::cout << str7 << std::endl;

   // 7. Taking string input for multiple Test Cases 
   // int t;
   // std::cin >> t;
   // std::cin.ignore();
   // while(t--){
   //    std::string str8;
   //    getline(std::cin , str8);
   //    std::cout << str8 << std::endl;
   // } 
   // input : 
   // 3
   // abc def
   // ghi jkl
   // mno pqr

   // 8. Taking input of very large number in string form and then extracting a digit from the string input as an integer form
   std::string s;
   getline(std::cin, s);
   int last_digit = s[s.size() - 1] - '0';
   std::cout << "Integer Digit : " << last_digit << std::endl;

   // input 
   // 38147091430817390587019284537019324087239846176324891509304932094871039567413298
   // O/p -> "Integer Digit" : 8


   return 0;
} 