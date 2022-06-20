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

vector<int> mergeVectors(vector<int> vec1, vector<int> vec2){
   vector<int> mergedVector;
   int size {};
   int remSize {};
   if(vec1.size() < vec2.size()){
      size = vec1.size();
      remSize = vec2.size() - size;
   } else {
      size = vec2.size();
      remSize = vec1.size() - size;
   }

   for(int i = 0, j= 0; i <= size && j <= size; ){
      if(vec1[i] < vec2[j]){
         mergedVector.push_back(vec1[i]);
         i++;
      }
      else{
         mergedVector.push_back(vec2[j]);
         j++;
      }
   }

   if(vec1.size() < vec2.size()){
      for(int i = vec2.size() - remSize + 1; i < vec2.size(); i++){
         mergedVector.push_back(vec2[i]);
      }
   }
   else{
      for(int i = vec1.size() - remSize + 1; i < vec1.size(); i++){
         mergedVector.push_back(vec1[i]);
      }

   }
   return mergedVector;
}

int main(){
   vector<int> vec1 = {1, 3, 5, 7, 9, 11, 13};
   vector<int> vec2 = {0, 2, 4, 6, 8, 10, 12, 14, 16, 17, 18};
   vector<int> mergedVector;

   mergedVector = mergeVectors(vec1, vec2);
   printVector(mergedVector);

   return 0;
}