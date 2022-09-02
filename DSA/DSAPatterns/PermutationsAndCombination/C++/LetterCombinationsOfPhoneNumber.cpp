// https://www.codingninjas.com/codestudio/problems/letter-combinations-of-a-phone-number_983623

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<string> &result) {
  cout << "{ ";
  for (auto i : result) {
    cout << i << ", ";
  }
  cout << " }" << endl;
}

void findCombinations(int index, string &keys, string processed,
                      vector<string> &result, map<char, string> &m) {
  if (index == keys.size()) {
    result.push_back(processed);
    return;
  }

  string str = m[keys[index]];
  for (int i = 0; i < str.size(); i++) {
    // pick the char
    processed.push_back(str[i]);
    findCombinations(index + 1, keys, processed, result, m);
    // backtracking
    processed.pop_back();
  }
}

vector<string> combinations(string s) {
  // Write your code here
  map<char, string> m = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
                         {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
                         {'8', "tuv"}, {'9', "wxyz"}};
  vector<string> res;
  string processed;
  findCombinations(0, s, processed, res, m);
  printVector(res);

  return res;
}

int main() {
  combinations("23");

  return 0;
}