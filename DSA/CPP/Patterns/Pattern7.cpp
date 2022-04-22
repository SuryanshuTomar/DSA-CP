// Pattern - 
//       *
//     *   *
//   *   *   *  
// *   *   *   *
//   *   *   *  
//     *   *
//       *


#include <iostream>
using namespace std;

int main(){

   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums; 

   // For Loop Approach  
   for(int row = 1; row <= 2 * rowNums - 1; row++){
      int colCount = row <= rowNums ? row : 2 * rowNums - row;
      int spaceCount = row <= rowNums ? rowNums - row : row - rowNums;
      for(int space = 1; space <= spaceCount; space++){
         cout << " ";
      }
      for(int col=1; col <= colCount; col++){
         cout << "* ";
      }
      cout << endl;
   }

   // While Loop Approach 
   int row {1};
   while(row <= 2 * rowNums - 1){
      int colCount = row <= rowNums ? row : 2 * rowNums - row;
      int spaceCount = row <= rowNums ? rowNums - row : row - rowNums;
      
      int space {1};
      while(space <= spaceCount){
         cout << " ";
         space++;
      }
      
      int col {1};
      while(col <= colCount){
         cout << "* ";
         col++;
      }
      row++;
      cout << endl;
   }
   return 0;
}