#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &vec){
   cout << "Vector : ";
   for(auto i : vec){
      cout << i ;
   }
   cout << endl;
}

void swap(int first, int second, vector<int> &vec){
   int temp = vec[first];
   vec[first] = vec[second];
   vec[second] = temp;
}

vector<int> reverseVector(vector<int> &vec){
   for(int i = 0; i <= vec.size() / 2; i++){
      swap(i, vec.size() - 1 - i, vec);
   }
   return vec;
}

int main(){
   vector<int> vec = {1, 2, 3, 4, 5};
   vector<int> reversedVec = reverseVector(vec);
   printVector(reversedVec);

   return 0;
}