// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t;
   cin >> t;
   while (t--) {
      int c1, c2, p;
      int sum1 = 0, sum2 = 0;
      cin >> c1 >> c2 >> p;
      
      for (int i = 0; i < p; i++) {
         int a1, a2;
         cin >> a1 >> a2;
         sum1 += a1;
         sum2 += a2;
      }

         cout << max(sum1, sum2) * min(c1, c2) + min(sum1, sum2) * max(c1, c2) << "\n";
      }
   return 0;
}