#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(vector<int> &vec){
   cout << "Vector : ";
   for(auto i: vec){
      cout << i << " ";
   }
   cout << endl;
}

int getArrayInteger(vector<int> &vec){
   int arrayInteger {0};
   for(int i : vec){
      arrayInteger = arrayInteger * 10 + i;
   }
   return arrayInteger;
}

void sumOfTwoArrays(vector<int> &vec1, vector<int> &vec2){
   int sumOfArraysInteger = getArrayInteger(vec1) + getArrayInteger(vec2);
   cout << "Sum : " << sumOfArraysInteger << endl;
   vector<int> resultArray;

   while(sumOfArraysInteger > 0){
      resultArray.push_back(sumOfArraysInteger % 10);
      sumOfArraysInteger /= 10;
   }
   reverse(resultArray.begin(), resultArray.end());
   printVector(resultArray);
}

int main(){
   int testcase;
   cout << "Enter Test Case : ";
   cin >> testcase;
   cout << endl;
   
   while(testcase--){
      int firstVecSize, secondVecSize;
      vector<int> vec1, vec2;

      cout << "Enter First and second vector size: ";
      cin >> firstVecSize >> secondVecSize;
      cout << endl;

      for(int i = 0; i < firstVecSize; i++){
         int vecItem;
         cout << "Enter First Vector : ";
         cin >> vecItem;
         vec1.push_back(vecItem);
         cout << endl;
      }
      for(int i = 0; i < secondVecSize; i++){
         int vecItem;
         cout << "Enter Second Vector :";
         cin >> vecItem;
         vec2.push_back(vecItem);
         cout << endl;
      }
      
      sumOfTwoArrays(vec1, vec2);

   }
   return 0;
}