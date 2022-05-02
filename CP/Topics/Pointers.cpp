#include <iostream>
using namespace std;

void increment(int *x){
   (*x)++;
}

void decrement(int &x){
   x--;
   cout << "X : " << x << endl;
   cout << "&X : " << &x << endl;
}

int main(){
   int x = 4;
   int *p_x = &x;
   int **p_p = &p_x;

   // All the addresses mentioned here are the address of starting 1 byte
   cout << "Integer : " << x << endl;
   cout << "Address of x : " << p_x << endl;
   cout << "Address of x + 1 : " << p_x + 1 << endl; 
   cout << "Address of Pointer of x : " << p_p << endl;
   cout << "Address of Pointer of p_x : " << &p_p << endl;
   cout << "Value at Pointer of p : " << *p_p << endl;
   cout << "Value at x through value at Pointer of x : " << **p_p << endl;
   cout << "value at Pointer of x : " << *p_x << endl;

   **p_p = 10;
   cout << "Value changed at x through value at Pointer of x : " << **p_p << endl;
   cout << "Address at p_x + 1 : " << p_x + 1 << endl; 



   // Pointers of Array 
   // - Array variables are themselves a pointer
   // - a = a[0] and *a+1 = a[1] and so on
   int a[10];
   a[1] = 5;
   cout << "a : " << a << endl;
   cout << "&a[0] : " << &a[0] << endl;

   cout << "*(a + 1) : " << *(a + 1)<< endl;
   cout << "a[1] : " << a[1] << endl;  

   // Passing pointers to functions -
   int y = 2;
   cout << "y: " << y << endl;
   increment(&y);
   cout << "y: " << y << endl;

   // Passing Reference values in functions -
   decrement(y);
   cout << "&y: " << &y << endl;
   cout << "y: " << y << endl;



   return 0;
}