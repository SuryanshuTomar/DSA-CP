#include <iostream>
using namespace std;

string swapFirstCharachter(string str1, string str2){
   string new_Str;
   new_Str.push_back(str2[0]);
   for(int i = 1; i < str1.size(); i++){
      new_Str.push_back(str1[i]);
   }
   return new_Str;
}

int main(){
   string str1, str2;
   cin >> str1 >> str2;

   cout << str1.size() << " " << str2.size() << endl;
   cout << str1+str2 << endl;
   cout << swapFirstCharachter(str1, str2) << " " << swapFirstCharachter(str2, str1);

   return 0;
}