#include <iostream>
using namespace std;

class Node {
public:
  int value;
  Node *next;

  Node(int value) {
    this->value = value;
    this->next = NULL;
  }
};

class LinkedListWithTail {
public:
  Node *head;
  Node *tail;
  int size;

  LinkedListWithTail() {
    this->head = NULL;
    this->tail = NULL;
    size = 0;
  }

  bool isEmpty() {
    if (size == 0)
      cout << "Linked List is Empty " << endl;
    else
      cout << "Linked List is not Empty " << endl;

    return size == 0;
  }

  int getSize() {
    cout << "Size is : " << size << endl;
    return size;
  }

  void prepend(int value) {
    Node *node = new Node(value);
    if (isEmpty()) {
      this->head = node;
      this->tail = node;
    } else {
      node->next = this->head;
      this->head = node;
    }
    size++;
  }

  void append(int value) {
    if (isEmpty())
      prepend(value);
    else {
      Node *node = new Node(value);
      this->tail->next = node;
      this->tail = this->tail->next;
      size++;
    }
  }

  void insertAtIndex(int index, int value) {
    if (index > 0 && isEmpty()) {
      cout << "Index does not exists";
      return;
    }
    if (index == 0) {
      prepend(value);
      return;
    }
    if (index == size) {
      append(value);
      return;
    }
    Node *node = new Node(value);
    Node *prev = getNode(index - 1);
    node->next = prev->next;
    prev->next = node;
    size++;
  }

private:
  void insertRecurisonCall(int index, int value, Node *temp) {
    if (index == 1) {
      Node *node = new Node(value);
      node->next = temp->next;
      temp->next = node;
      size++;
      return;
    }

    temp = temp->next;
    insertRecurisonCall(index - 1, value, temp);
  }

public:
  // TC and SC - O(n)
  // (SC is O(n) because of recursion and its calls are stored in stack)
  void insertUsingRecursion(int index, int value) {
    if (index > 0 && isEmpty()) {
      cout << "Index does not exists";
      return;
    }
    if (index == 0) {
      prepend(value);
      return;
    }
    if (index == size) {
      append(value);
      return;
    }

    Node *temp = head;
    insertRecurisonCall(index, value, temp);
  }

  int deleteByIndex(int index) {
    if (index < 0 || index > size - 1) {
      cout << "Index does not exists" << endl;
      return -1;
    }
    int deletedValue;
    if (index == 0) {
      deletedValue = this->head->value;
      if (size == 1) {
        this->head = NULL;
        this->tail = NULL;
      } else {
        this->head = this->head->next;
      }
      size--;
      return deletedValue;
    }
    Node *prev = getNode(index - 1);
    if (index == size - 1) {
      deletedValue = this->tail->value;
      this->tail = prev;
      prev->next = NULL;
      size--;
      return deletedValue;
    }
    Node *temp = prev->next;
    prev->next = temp->next;
    deletedValue = temp->value;
    delete temp;
    temp->next = NULL;
    size--;
    return deletedValue;
  }

  int searchByIndex(int index) {
    if (index > size - 1) {
      cout << "Index does not exists" << endl;
      return -1;
    }
    return getNode(index)->value;
  }

  int search(int value) {
    Node *temp = head;
    int index = -1;
    while (temp) {
      if (temp->value == value)
        return index;
      temp = temp->next;
      index++;
    }
    return index;
  }

  void reverse() {
    Node *prev = NULL;
    Node *newTail = this->head;
    Node *curr = this->head;
    while (curr) {
      Node *nxt = curr->next;
      curr->next = prev;
      prev = curr;
      curr = nxt;
    }
    this->head = prev;
    this->tail = newTail;
  }

  Node *getNode(int index) {
    Node *temp = this->head;
    int i = 0;
    while (i < index) {
      temp = temp->next;
      i++;
    }
    return temp;
  }

  void print() {
    if (isEmpty()) {
      cout << "Linked List is empty" << endl;
      return;
    }
    Node *temp = this->head;
    cout << "Head -> ";
    while (temp != NULL) {
      cout << temp->value << " -> ";
      temp = temp->next;
    }
    cout << "Tail" << endl;
  }
};

int main() {
  LinkedListWithTail *list = new LinkedListWithTail();
  list->isEmpty();
  list->getSize();

  list->prepend(10);
  list->prepend(20);
  list->prepend(30);
  list->insertUsingRecursion(2, 100);
  list->insertUsingRecursion(3, 200);
  list->print();
  list->getSize();

  list->append(60);
  list->append(70);
  list->print();
  list->getSize();

  list->insertAtIndex(3, 40);
  list->insertAtIndex(4, 50);
  list->print();
  list->getSize();

  cout << list->searchByIndex(3) << endl;
  cout << list->search(40) << endl;

  list->deleteByIndex(0);
  list->deleteByIndex(5);
  list->deleteByIndex(2);
  list->print();
  list->isEmpty();
  list->getSize();

  list->reverse();
  list->print();

  return 0;
}