// LeetCode - 1678.

#include <bits/stdc++.h>
using namespace std;

string interpret(string command){
   string parsedString;
   int i {0};
   while(i < command.size()) {
      if(command[i] == 'G'){
         parsedString.append("G");
         i++;
      }
      else if(command[i] == '(' && command[i+1] == ')'){
         parsedString.append("o");
         i+=2;
      }
      else {
         parsedString.append("al");
         i+=4;
      } 
   }
   return parsedString;
}

int main(){
   string str;
   cin >> str;
   cout << "Input String : " << str;
   cout << "Parsed string: " << interpret(str);
   return 0;
}