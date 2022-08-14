// https://www.codingninjas.com/codestudio/problems/find-power-of-a-number_893198?leftPanelTab=1

#include <iostream>
using namespace std;

long long Pow(int X, int N)
{
    // Write your code here. 
    if(N == 0) return 1;
    long long temp = Pow(X, N/2);
    if(N % 2 == 1) return temp * temp * X;
    return temp * temp;
}

int main(){
   cout << Pow(3, 5);
   return 0;
}

// SC - O(n)
// TC - O(n)