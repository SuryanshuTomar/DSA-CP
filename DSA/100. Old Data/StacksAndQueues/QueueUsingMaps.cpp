// Optimised Version of Queue using maps.
// In this version of queue the dequeue operation will take O(1) TC.

#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int front;
    int rear;
    map<int, int> items;
        Queue(){
            front = 0;
            rear = 0;
        }

        void enqueue(int value){
            items[rear] = value;
            rear++;
        }
       
        int dequeue(){
            int deletedValue = items[front];
            items.erase(front);
            front++;
            return deletedValue;
        }
       
        int getSize(){
            return rear - front + 1;
        }
       
        int peek(){
            return items[front];
        }
       
        void print(){
            map<int,int>::iterator itr;
            cout << "[Front]";
            for(itr = items.begin(); itr != items.end(); itr++){
                cout <<  " <- " << itr->second;
            }
            cout << " [Rear]" << endl;
        }
};



int main() {
    Queue* queue = new Queue();
    queue->enqueue(10);
    queue->enqueue(20);
    queue->enqueue(30);
    queue->print();
    cout << queue->peek() << endl;
    queue->dequeue();
    queue->dequeue();
    queue->print();
    queue->enqueue(20);
    queue->enqueue(30);
    queue->print();
    cout << queue->peek() << endl;
    cout << queue->getSize() << endl;

    return 0;
}