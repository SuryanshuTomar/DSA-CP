// Pattern - 
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;

int main(){

   int rowNums {};
   cout << "Enter the Number of Rows you want for the pattern : ";
   cin >> rowNums; 

   // For Loop Approach  
   for(int row = 1; row <= rowNums; row++){
      for(int col = row; col >= 1; col--){
         cout << col << " ";
      }
      cout << endl;
   }

   // While Loop Approach
   int row {1};
   while (row <= rowNums){
      int col {row};
      while (col >= 1) {
         cout << col << " ";
         col--;
      }
      cout << endl;
      row++;
      
   }

   return 0;
}