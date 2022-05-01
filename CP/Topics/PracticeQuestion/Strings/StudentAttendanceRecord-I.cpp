// LeetCode - 551.

#include <bits/stdc++.h>
using namespace std;

bool checkAttendanceAward(string str){
   int abs = 0;
   int i = 0;
   while(i < str.size()){
      if(str[i] == 'A' ){
         abs++;
      }
      else if(str[i] == 'L' && str[i+1] == 'L' && str[i+2] == 'L'){
         return false;
      }
      i++;
   }
   if(abs >= 2){
      return false;
   }

   return true;
}

int main(){
   string str;
   cin >> str;
   cout << "Input String : " << str << endl;
   cout << "Attendance Result : " << checkAttendanceAward(str);
   return 0;
}