// https://www.codingninjas.com/codestudio/problems/nth-fibonacci-number_74156

#include<bits/stdc++.h>
using namespace std;

int findFibonacci(int n){
    if(n == 2 || n == 1){
        return 1;
    }
    int fib = findFibonacci(n-1) + findFibonacci(n-2);
    return fib;
}

int main()
{
    int n;
    cin >> n;
    
    cout << findFibonacci(n);
}

// SC - O(n)
// TC - O(2^n)