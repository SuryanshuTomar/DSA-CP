// https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/

#include <bits/stdc++.h>
using namespace std;

int main(){
   int a, b, c;
   cin >> a >> b >> c;

   int i = 2;
   int cth_num;
   while(c > 0){
      if(i % a == 0 || i % b == 0){
         cth_num = i;
         c--;
      }
      i++;
   }

   i = 1;
   int lcm;
   while(i <= a*b){
      if(i%a == 0 && i%b == 0){
         lcm = i;
         break;
      }
      i++;
   }

    int step;
      if(cth_num % a == 0 && cth_num % b == 0){
         step = lcm;
      }
      else if(cth_num % a == 0){
         step = a;
      }
      else {
         step = b;
      }

      for(int i = cth_num; i >= 0; i = i - step){
         cout << i << " ";
      }
   return 0;
}