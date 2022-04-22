// Pattern -
// * 
// * *
// * * *
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
   for(int row=1; row <= 2 * rowNums - 1; row++){
      int colCount = row <= (2*rowNums) /2 ? row : 2 * rowNums - row;
      for(int col=1; col <= colCount; col++){
         cout << "* ";
      }
      cout << endl;  
   }

   // While Loop Approach 
   int row {1};
   while(row <= 2 * rowNums - 1){
      int colCount = row <= (2*rowNums) /2 ? row : 2 * rowNums - row;
      int col {1};
      while(col <= colCount){
         cout << "* ";
         col++;
      }
      cout << endl;
      row++;
   }

   return 0;
}