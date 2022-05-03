// hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/

#include <bits/stdc++.h>
using namespace std;

int main(){
   string input_string;
   cin >> input_string;

   int i = 0;
   int total = 0;
   while(i < input_string.size()){
      // To UpperCase
      if(input_string[i] >= 97 && input_string[i] <= 122) {
         total += (int)input_string[i] - 32;
      }
      // To LowerCaselBaXps
      else if(input_string[i] >= 65 && input_string[i] <= 90){
         total -= (int)input_string[i] + 32;
      }
         i++;
   }

      if(total < 0){
         total *= -1;
      }

      int c = 2;
      int flag = 0;
      while(c < total){
         if(total % c  == 0){
            flag++;
            break;
         }
         c++;
      }
      if(flag > 0){
         cout << 0 << endl;
      }
      else{
         cout << 1 << endl;
      }

   return 0;
}