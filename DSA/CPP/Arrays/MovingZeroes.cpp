#include <iostream>
#include <vector>

using namespace std;


void printVector(vector<int> &vec){
// void printVector(vector<int> vec){
   cout << "Vector : ";
   for(auto i: vec){
      cout << i << " ";
   }
   cout << endl;
}

vector<int> moveZeroes1(vector<int> &vec){
   int count = 0;
   vector<int> newVec;
   for(auto i : vec){
      if(i == 0) {
         count++;
      }
      else{
         newVec.push_back(i);
      }
   }
   while(count-- > 0){
      newVec.push_back(0);
   }

   return newVec;
}

void moveZeroes2(vector<int> &vec){
   int count = 0;
   int pos = 0;
   for(int i = 0; i < vec.size(); i++){
      if(vec[i] == 0){
         count++;
      }
      else{
         vec[pos] = vec[i];
         pos++;
      }
   }
   while(count > 0){
      vec[vec.size() - count] = 0;
      count--;
   }
   printVector(vec);
}

void moveZeroes3(vector<int> &vec){
   int nonZero = 0;
   for(int i = 0; i < vec.size(); i++){
      if(vec[i] != 0){
         swap(vec[i], vec[nonZero]);
         nonZero++;
      }
   }
   printVector(vec);
}

int main(){
   vector<int> vec = {3, 2, 4, 5, 6, 2, 0, 1, 3, 4, 6, 0};
   // printVector(moveZeroes1(vec));

   vector<int> newVec = moveZeroes1(vec);
   printVector(newVec);
   moveZeroes2(vec);
   moveZeroes3(vec);
   return 0;
}