#include <bits/stdc++.h>
using namespace std;

int main(){
   string inputString;
   string reversedString;
   cout << "Enter any String : ";
   getline(cin, inputString);
   cout << "Reversed String : ";
   for(int i=inputString.size() - 1; i >= 0; i--){
      reversedString.push_back(inputString[i]);
   }
   cout << reversedString;

   return 0;
}