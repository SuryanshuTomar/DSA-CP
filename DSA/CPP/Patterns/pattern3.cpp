// Pattern - 
// *
// * *
// * * *
// * * * *

#include <iostream>
using namespace std;

int main(){

   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums;

   // For Loop Approach
   for(int row = 1; row <= rowNums; row++){
      for(int col = 1; col <= row; col++){
         cout << "* ";
      }
      cout << endl;
   }

   // While Loop Approach
   int row {1};
   while(row <= rowNums){
      int col {1};
      while(col <= row){
         cout << "* ";
         col++;
      }
      row++;
      cout << endl;
   }

   return 0;
}