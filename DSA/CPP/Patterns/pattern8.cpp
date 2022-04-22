// Pattern - 
//          1
//        2 1 2
//      3 2 1 2 3
//    4 3 2 1 2 3 4

#include <iostream>
using namespace std;

int main(){

   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums; 

   // For Loop Approach
   for(int row = 1; row <= rowNums; row++){
      for(int space = 1; space <= rowNums - row; space++){
         cout << "  ";
      }
      for(int col = row; col >= 1; col--){
         cout << col << " ";
      }
      for(int col = 2; col <= row; col++){
         cout << col << " ";
      }
      cout << endl;
   }

   // While Loop Approach
   int row {1};
   while (row <= rowNums){
      int space {1};
      while(space <= rowNums - row){
         cout << "  ";
         space++;
      }

      int col {row};
      while(col >= 1){
         cout << col << " ";
         col--;
      }

      col = 2;
      while(col <= row){
         cout << col << " ";
         col++;
      }

      row++;
      cout << endl;
   }

   return 0;
}