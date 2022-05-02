// https://www.hackerearth.com/problem/algorithm/capitalbaazi/

#include <bits/stdc++.h>
using namespace std;

int main(){
   string input_string;
   getline(cin, input_string);
   string result;
    for(int i = 0; i < input_string.length(); i++){
       if(input_string[i] == ' '){
          cout << endl;
       }
       else{
          cout << (char)(input_string[i] - 32);
       }
    }

   return 0;
}