// https://www.codingninjas.com/codestudio/problems/factorial-of-a-number_1115779?leftPanelTab=1

#include <iostream>
using namespace std;

int findFactorial(int n){
    if(n == 0){
        return 1;
    }
    return n * findFactorial(n-1);
}

int main() {
    //Write your code here
    int n;
    cin >> n;
    if(n < 0){
        cout << "Error" << endl;
    }
    else {
       cout << findFactorial(n);
    }

    return 0;
}

// SC - O(n)
// TC - O(n)