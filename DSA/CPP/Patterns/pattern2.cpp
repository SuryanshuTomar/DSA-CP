#include "iostream"

int main(){
   int rowNum {};

   std::cout << "Enter the Number of Rows you want for the pattern : ";
   std::cin >> rowNum;

   for(int row = 1; row <= rowNum ; row++){
      for(int col = 0; col < rowNum ; col++){
         std::cout << row <<  " ";
      }
      std::cout << std::endl;
   }

}