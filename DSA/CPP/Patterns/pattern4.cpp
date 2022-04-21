// Pattern -
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main(){

   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums;  

   // For Loop Approach
   for(int row = 0; row < rowNums; row++){
      for(int col = 0; col < rowNums - row; col++){
         cout << "* ";
      }
      cout << endl;

   }

   // While Loop Approach
   int row {0};
   while(row < rowNums){
      int col{0};
      while(col < rowNums - row){
         cout << "* ";
         col++;
      }
      row++;
      cout << endl;
   }

   return 0;
}