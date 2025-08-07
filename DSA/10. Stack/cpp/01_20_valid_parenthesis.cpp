// https://leetcode.com/problems/valid-parentheses/description/

#include <iostream>
#include <stack>

using namespace std;

bool isValid(string &str) {
  stack<char> store;
  for (char ch : str) {
    if (!store.empty() &&
       ((store.top() == '(' && ch == ')') || 
        (store.top() == '{' && ch == '}') ||
        (store.top() == '[' && ch == ']'))){
          store.pop();
        }
    else {
      store.push(ch);
    }
  }

  return store.empty() ? true : false;
}

int main() {
  string input = "()";

  cout << isValid(input) << endl;
}
