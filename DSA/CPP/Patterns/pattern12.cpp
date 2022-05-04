// Pattern Type 1-
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

// Pattern Type 2-
// 4 4 4 4 4 4 4 4
// 4 3 3 3 3 3 3 4
// 4 3 2 2 2 2 3 4
// 4 3 2 1 1 2 3 4
// 4 3 2 1 1 2 3 4
// 4 3 2 2 2 2 3 4
// 4 3 3 3 3 3 3 4
// 4 4 4 4 4 4 4 4

#include <iostream>
using namespace std;

int main(){

   
   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums; 

   // For Pattern Type 1
   int totalDist = 2 * rowNums - 2;

   // For Pattern Type 2
   // int totalDist = 2 * rowNums - 1;

   // For Loop Approach  
   for(int row = 0; row <= totalDist; row++){
      for(int col = 0; col <= totalDist ; col++){
         int distFromLeft = col;
         int distFromRight = totalDist - col;
         int distFromUp = row;
         int distFromDown = totalDist - row;
         int everyIndexValue = rowNums - min(min(distFromLeft, distFromRight), min(distFromUp, distFromDown));
         cout << everyIndexValue << " ";
      }
      cout << endl;
   }

   return 0;
}