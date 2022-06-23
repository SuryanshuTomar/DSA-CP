#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &vec){
   cout << "Vector : ";
   for(auto i: vec){
      cout << i << " ";
   }
   cout << endl;
}

bool isSortedAndRotated(vector<int> &vec){
   int count = 0;

   for(int i = 0; i < vec.size() - 1; i++){
      if(vec[i] > vec[i+1]){
         count++;
      }
      if(count > 1){
         return false;
      }
   }

   if(vec[vec.size() - 1] > vec[0] && count == 1) return false;

   return true;
}

int main(){
   vector<int> vec = {6, 10, 6};
   bool result = isSortedAndRotated(vec);
   cout << result << endl;


   return 0;
}