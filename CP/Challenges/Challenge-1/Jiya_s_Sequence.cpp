// https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

#include <bits/stdc++.h>
using namespace std;

int main(){
   int test;
   cin >> test;
   long series[1000];

   while(test--){
      int series_count;
      cin >> series_count;
      long long product = 1;
      for(int i = 0; i < series_count; i++){
         cin >> series[i];
         product *= series[i];
      }
      if(product % 10 == 2 || product % 10 == 3 || product % 10 == 5){
         cout << "YES" << endl;
      }
      else{
         cout << "NO" << endl;
      }
   }
   return 0;
}