// https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/

#include <bits/stdc++.h>
using namespace std;

const int N = 40;
int main(){
   int test;
   cin >> test;

   long long int triangle[N][N];
    triangle[0][0] = 1;
      for(int row = 1; row < N; row++){
         triangle[row][0] = 1;
         triangle[row][row] = 1;
         for(int col = 1; col < row; col++){
            triangle[row][col] = triangle[row-1][col] + triangle[row-1][col-1];       
         }
      }


   while(test--){
      int triangleHeight;
      cin >> triangleHeight;     
      for(int i = 0; i < triangleHeight; i++){
         for(int j = 0; j <= i; j++){
            cout << triangle[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}