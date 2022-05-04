// Pattern - 
//    1
//   212
//  32123
// 4321234
//  32123
//   212
//    1

#include <iostream>
using namespace std;

int main(){
   
 
   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums; 

   // For Loop Approach  
   for(int row = 1; row <= 2 * rowNums; row++){
      int calSpace = row <= rowNums ? rowNums - row : row - rowNums;
      int calCol = row <= rowNums ? row : 2 * rowNums - row;
      int calCol2 = row <= rowNums ? row: 2 * rowNums - row;
      for(int space = calSpace; space >= 0; space--){
         cout << " ";
      }
      for(int col = calCol; col >= 1; col--){
         cout << col;
      }
      for(int col = 2; col <= calCol2; col++){
         cout << col;
      }
      cout << endl;
   }

   // While Loop Approach 
   int row {1};
   while(row <= 2 * rowNums){
      int calSpace = row <= rowNums ? rowNums - row : row - rowNums;
      int calCol = row <= rowNums ? row : 2 * rowNums - row;
      int calCol2 = row <= rowNums ? row: 2 * rowNums - row;
      
      int space {calSpace};
      while(space >= 0){
         cout << " ";
         space--;
      }

      int col {calCol};
      while(col >= 1){
         cout << col ;
         col--;
      }

      col =  {2};
      while(col <= calCol2){
         cout << col;
         col++;
      }
      cout << endl;
      row++;
   }

   return 0;
}