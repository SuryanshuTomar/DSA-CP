#include <iostream>
using namespace std;

class Stack{
    public:
        int* arr;
        int size = 0;
        int top = -1;
       
        Stack(int size){
            this->size = size;
            arr = new int[size];
        }
       
       
        int getSize(){
            cout << "Stack Size : " << top + 1 << endl;
            return top + 1;
        }
       
        int peek(){
            cout << "Top Element is : " << arr[top] << endl;
            return arr[top];
        }
       
        bool isEmpty(){
            if(top == -1){
                cout << "Stack is Empty !" << endl;
                return true;
            } else {
                cout << " Stack is not Empty !" << endl;
                return false;
            }
        }
       
        void empty(){
            top = -1;
            cout << "Emptied  Stack !" << endl;
        }
       
        void push(int value){
            if(top >= size - 1) {
                cout << "Stack Overflow : Size Limit Exceeded !!" << endl;
                return;
            }
            top++;
            arr[top] = value;
        }
       
        int pop(){
            if(this->isEmpty()){
                return -1;
            }
            int deletedValue = arr[top];
            top--;
            return deletedValue;
        }
       
        void printStack(){
            if(this->isEmpty()){
                 cout << "-> X" << endl;
                 return;
            }
            cout << endl << "Stack : " << endl;
            cout <<  "-> " << arr[top] << endl;
            for(int i = top - 1; i >= 0; i--){
                cout << "   " << arr[i] << endl;
            }
            cout << endl;
        }
};

int main(){
    Stack* stack = new Stack(5);
    stack->isEmpty();
   
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    stack->push(5);
   
    stack->peek();
    stack->getSize();
    stack->isEmpty();
    stack->printStack();
   
    stack->empty();
    stack->printStack();
   
    stack->push(6);
    stack->push(7);
    stack->push(8);
    stack->push(9);
    stack->push(10);
    stack->printStack();
   
    stack->pop();
    stack->printStack();
    stack->peek();
    stack->getSize();
    return 0;
}