// Pattern - 
// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;

int main(){

   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums; 

   // For Loop Approach  
   for(int row = 1; row <= rowNums; row++){
      for(int col = row; col < 2*row; col++){
         cout << col << " ";
      }
      cout << endl;
   }

   // While Loop Approach 
   int row {1};
   while(row <= rowNums){
      int col {row};
      while(col < 2* row){
         cout << col << " ";
         col++;
      }
      cout << endl;
      row++;
   }

   return 0;
}