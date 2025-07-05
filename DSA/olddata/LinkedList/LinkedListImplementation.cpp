#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node(int value){
            this->value = value;
            this->next = NULL;
        }
       
        ~Node(){
            int deletedValue = this->value;
            if(this->next == NULL){
                delete next;    
                this->next = NULL;
            } else{
                this->next = NULL;
            }
            cout << "Memory freed for " << deletedValue << endl;
        }
};

class LinkedList {
    private:
        Node* head;
        int size;
    public:
        LinkedList(){
            this->head = NULL;
            this->size = 0;
        }
       
    bool isEmpty(){
        if(this->size == 0) {
            return true;
        }
        else {
            return false;
        }
    }
   
    int getSize(){
        return this->size;
    }
   
    void prepend(int value){
        Node* node = new Node(value);
        if(this->isEmpty()) {
            this->head = node;
        } else {
            node->next = this->head;
            this->head = node;
        }
        this->size++;
    }
   
    void append(int value) {
        if(this->head == NULL){
            this->prepend(value);
            return;
        }
        Node* node = new Node(value);
        Node* last = this->getNode(this->size - 1);
        last->next = node;
        this->size++;
    }
   
    void insertAt(int index, int value){
        if(index == 0){
            this->prepend(value);
            return;
        }
        if(this->size - 1 < index || index < 0){
            cout << "Index " << index << " does not exist !" << endl;
            return;
        }
        Node* node = new Node(value);
        Node* prev = this->getNode(index - 1);
        node->next = prev->next;
        prev->next = node;
        this->size++;
    }
   
    int removeAt(int index){
        Node* temp = this->head;
        int deletedValue;
        if(index == 0){
            if(temp->next == NULL){
                this->head = NULL;
            } else {
                this->head = temp->next;
            }
            deletedValue = temp->value;
            delete temp;
            this->size--;
            return deletedValue;
        }
        if(index > this->size-1 || index < 0) {
            cout << "Index " << index << " does not exist !" << endl;
            return 0;
        }
       
        Node* prev = this->getNode(index-1);
        temp = prev->next;
        prev->next = prev->next->next;
        this->size--;
        deletedValue = temp->value;
        delete temp;
        return deletedValue;
    }
   
    Node* getNode(int index){
        Node* temp = this->head;
        int itr = 0;
        while(itr != index){
            temp = temp->next;
            itr++;
        }
        return temp;
    }
   
   
   
    void printList(){
       if(this->isEmpty()) {
            cout << "List is Empty !" << endl;
            return;
        }
        Node* temp = this->head;
        cout << "HEAD->";
        while(temp != NULL){
            cout << temp->value << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList* list = new LinkedList();
    cout << "Is list Empty ? : " << list->isEmpty() << endl;
    cout << "Size of List is : " << list->getSize() << endl;
    list->prepend(10);
    list->prepend(20);
    list->prepend(30);
    list->printList();
    list->append(40);
    list->printList();
    cout << "Size of List is : " << list->getSize() << endl;
    list->insertAt(4, 50);
    list->printList();
    cout << "Size of List is : " << list->getSize() << endl;
    list->removeAt(0);
    list->removeAt(2);
    list->printList();
    cout << "Size of List is : " << list->getSize() << endl;
    cout << "Is list Empty ? : " << list->isEmpty() << endl;
    return 0;
}