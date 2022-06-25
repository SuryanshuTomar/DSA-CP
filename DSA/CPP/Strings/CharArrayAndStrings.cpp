#include <iostream>
using namespace std;

int getCharArrayLength(char str[]){
   // Finding the length of charachter array
   int len {0};
   int i {0};
   while(str[i++] != '\0') len++;
 
   return len;
}

char* reverseCharArray(char str[], int length){
   for(int i = 0; i < length / 2; i++){
      swap(str[i], str[length - i - 1]);
   }
return str;
}

int main(){
   char name[20];

   string anotherName;
   
   // Taking input in charachter array with spaces 
   cout << "Enter your name : ";
   cin.getline(name, sizeof(name));
   cout << "Enter your another name : ";
   getline(cin, anotherName);

   cout << "Your name is : " << name << endl;
   cout << "Your Another name is : " << anotherName << endl;

   int length = getCharArrayLength(name);
   cout << "Length of the char array is : " << length << endl; 
   cout << "Reversed Char Array : " << reverseCharArray(name, length);

   return 0;
}


