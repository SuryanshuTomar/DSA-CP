// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1

#include "../../PrintVector.h"
#include <iostream>
#include <vector>

using namespace std;

// Approach 2:  Two pointers
void segregate0and1_2(vector<int> &arr) {
  // code here
  int start = 0, end = arr.size() - 1;

  while (start < end) {
    if (arr[start] == 0)
      start++;
    else if (arr[end] == 1)
      end--;
    else {
      swap(arr[start], arr[end]);
      start++;
      end--;
    }
  }
}

// Approach 1: Count method
void segregate0and1_1(vector<int> &arr) {
  // code here
  int count0 = 0;
  int count1 = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0)
      count0++;
    else
      count1++;
  }

  for (int i = 0; i < count0; i++) {
    arr[i] = 0;
  }

  for (int i = count0; i < arr.size(); i++) {
    arr[i] = 1;
  }
}

int main() {
  vector<int> input1 = {0, 0, 1, 1, 0};
  vector<int> input2 = {0, 0, 1, 1, 0, 1, 0};

  segregate0and1_1(input1);
  segregate0and1_2(input2);

  printVector(input1);
  printVector(input2);
}

// Time and space complexity in both the cases will be same.
// TC - O(n)
// SC - O(n)
// where n is the size of the input array.