#include <iostream>

int main(){
   int rowNum {};

   std::cout << "Enter the Number of Rows you want for Star pattern : ";
   std::cin >> rowNum;

   // For Loop Approach
   for(int row = 0; row < rowNum; row++){
      for(int col = 0; col < rowNum; col++){
         std::cout << "* " ;
      }
      std::cout << std::endl;
   }

   // While Loop Approach
   int row {0};
   while(row < rowNum){
   int col {0};
      while(col < rowNum){
         std::cout << "* ";
         col++;
      }
      std::cout << std::endl;
      row++;
   }

   return 0;
}