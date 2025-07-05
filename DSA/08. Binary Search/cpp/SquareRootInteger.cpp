// https://leetcode.com/problems/sqrtx/

#include <iostream>
using namespace std;

#define ll long long

int mySqrt(int x) {
  ll start = 0;
  ll end = x;

  ll ans = -1;

  while (start <= end) {
    ll mid = start + (end - start) / 2;
    ll possibleRoot = mid * mid;

    if (possibleRoot == x) {
      return mid;

    }

    else if (possibleRoot > x) {
      end = mid - 1;

    } else {
      ans = mid;
      start = mid + 1;
    }
  }
  return ans;
}

int main() {
  cout << "Integer Square Root : " << mySqrt(37) << endl;

  return 0;
}