#include <iostream>

int main(){
   int starNum {};

   std::cout << "Enter the Number of Rows you want for Star pattern : ";
   std::cin >> starNum;

   // For Loop Approach
   for(int row = 0; row < starNum; row++){
      for(int col = 0; col < starNum; col++){
         std::cout << "* " ;
      }
      std::cout << std::endl;
   }

   // While Loop Approach
   int row {0};
   while(row < starNum){
   int col {0};
      while(col < starNum){
         std::cout << "* ";
         col++;
      }
      std::cout << std::endl;
      row++;
   }

   return 0;
}