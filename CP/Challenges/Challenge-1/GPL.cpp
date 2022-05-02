// https://www.hackerearth.com/problem/algorithm/gpl/

#include <bits/stdc++.h>
using namespace std;

int main(){
   int test;
   cin >> test;
   while(test--){
      int string_size;
      cin >> string_size;
      string binary_string;
      cin >> binary_string;

      long long result = 0;
      long long two_power = 1;

      for(int i = string_size - 1; i >= 0; i--){
         int binary_digit = binary_string[i] - '0';
         result += (two_power * binary_digit);
         two_power *= 2;
      }
      cout << endl;
      cout << result;

   }
   return 0;
}