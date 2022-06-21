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

void rotateVector(vector<int> &vec, int k){
   // Formula for shifting array element elements in a cyclic way at k intervals
   // arr[(i+k) % n] = arr[i]
   // i -> index
   // k -> shifting position
   // n -> size of array
   vector<int> temp(vec.size());
   for(int i = 0; i < vec.size(); i++){
      temp[(i+k) % vec.size()] = vec[i];
   }
   printVector(temp);
}

// Mod Formula => RandomNumber % number = o/p-Range[1 - (number - 1)]
int main(){
   vector<int> vec = {1, 7, 9, 11, 13};
   int k = 2;
   // o/p -> {11, 13, 1, 7, 9}

   rotateVector(vec, k);
   
   return 0;
}