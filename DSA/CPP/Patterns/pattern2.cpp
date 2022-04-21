#include "iostream"

int main(){
   int rowNum {};

   std::cout << "Enter the Number of Rows you want for the pattern : ";
   std::cin >> rowNum;

   // For Loop Approach
   for(int row = 1; row <= rowNum ; row++){
      for(int col = 0; col < rowNum ; col++){
         std::cout << row <<  " ";
      }
      std::cout << std::endl;
   }

   // While Loop Approach
   int row {1};
   while(row <= rowNum){
   int col {0};
      while(col < rowNum){
         std::cout << row << " ";
         col++;
      }
      std::cout << std::endl;
      row++;
   }

}