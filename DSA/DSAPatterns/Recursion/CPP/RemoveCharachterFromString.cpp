#include <iostream>
using namespace std;

string removeCharachterFromString(string &s, int currentIndex, char target, string result){
   if(currentIndex > s.size() - 1) return result;
   if(s[currentIndex] != target) result += s[currentIndex];
   return removeCharachterFromString(s, currentIndex + 1, target, result);
}

int main(){
   string str = "baccad";
   char target = 'a';
   string result = "";
   cout << removeCharachterFromString(str, 0, target, result) << endl;
   return 0;
}

// SC - O(n);
// TC - O(n);
