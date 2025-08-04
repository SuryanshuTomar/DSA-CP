#include <iostream>
using namespace std;

class Queue{
    public:
        int* arr;
        int max_size;
        int front;
        int rear;
       
        Queue (){
            max_size = 100001;
            front = -1;
            rear = -1;
            arr = new int[max_size];
        }
       
        bool isEmpty(){
            if(rear == -1){
                cout << "Queue is Empty !" << endl;
                return true;
            } else {
                return false;
            }
        }
       
        int getSize(){
            int size = rear == -1 && front == -1 ? 0 : rear - front + 1;
            cout << "Queue size : " << size << endl;
            return size;
        }
       
        int peek(){
            if(this->isEmpty()){
                return -1;
            }
            cout << "Front of the queue : " << arr[front] << endl;
            return arr[front];
        }
       
        void empty(){
            if(this->isEmpty()){
                return;
            }
            front = -1;
            rear = -1;
        }
       
        void enqueue(int value){
            if(rear >= max_size - 1){
                cout << "Queue is FULL !" << endl;
                return;
            }
            if(front == -1){
                front++;
            }
            rear++;
            arr[rear] = value;
        }
       
        int dequeue(){
            if(this->isEmpty()){
                return -1;
            }
            if(front == rear){
                front = -1;
                rear = -1;
            }
            int deletedValue = arr[front];
            arr[front] = -1;
            front++;
            return deletedValue;
        }
       
        void print(){
            if(this->isEmpty()){
                return;
            }
            cout << "[Rear] ";
            for(int i = rear; i > front; i--){
                cout << arr[i] << " -> ";
            }
            cout << arr[front] << " [Front]" << endl;
        }
};

int main() {
    Queue* queue = new Queue();
    queue->peek();
    queue->isEmpty();
    queue->getSize();
   
    queue->enqueue(10);
    queue->enqueue(20);
    queue->enqueue(30);
    queue->enqueue(40);
    queue->enqueue(50);
   
    queue->print();
    queue->peek();
    queue->getSize();
   
    queue->dequeue();
    queue->dequeue();
    queue->print();
    queue->peek();
    queue->getSize();
   
    queue->empty();
    queue->dequeue();
    queue->print();
    queue->peek();
    queue->getSize();
   
   
}