#include<iostream>
using namespace std;

class Node {
   public:
      int value;
      Node* next;
      Node* prev;
		Node(int value) {
			this->value = value;
			this->next = NULL;
			this->prev = NULL;
		}
};

class DoublyLinkedList {
   public:
      Node* head;
      Node* tail;
      int size;
	DoublyLinkedList() {
		this->head = NULL;
		this->tail = NULL;
		size = 0;
	}

	bool isEmpty() {
		return this->size == 0;
	}

	int getSize() {
		return this->size;
	}

	void prepend(int value) {
		Node* node = new Node(value);
		if (this->isEmpty()) {
			this->head = node;
			this->tail = node;
			this->size++;
			return;
		}
		node->next = this->head;
		this->head->prev = node;
		this->head = node;
		this->size++;
	}

	void append(int value) {
		if (this->isEmpty()) {
			this->prepend(value);
			return;
		}
		Node* node = new Node(value);
		this->tail->next = node;
		node->prev = this->tail;
		this->tail = node;
		this->size++;
	}

	void insert(int index, int value) {
		if (index < 0 || index >= this->size) {
			cout <<"Index does not exists !" << endl;
			return;
		}

		if (this->isEmpty() || index == 0) {
			this->prepend(value);
			return;
		}

		if (index == this->size - 1) {
			this->append(value);
			return;
		}
		Node* node = new Node(value);
		Node* prev = this->getNode(index - 1);
		Node* nextNode = prev->next;
		node->next = nextNode;
		nextNode->prev = node;
		prev->next = node;
		node->prev = prev;
		this->size++;
	}

	int deleteByIndex(int index) {
		int deletedValue = -1;
		if (index < 0 || index >= this->size || this->isEmpty()) {
			cout <<"Index does not exists !" << endl;
			return deletedValue;
		}
		if (index == 0) {
			if (this->size == 1) {
				deletedValue = this->head->value;
				this->head = NULL;
				this->tail = NULL;
			} else {
				deletedValue = this->head->value;
				this->head = this->head->next;
				this->head->prev = NULL;
			}
			this->size--;
			return deletedValue;
		}
		Node* prevNode = this->getNode(index - 1);
		if (index == this->size - 1) {
			deletedValue = this->tail->value;
			this->tail = this->tail->prev;
			this->tail->next = NULL;
			this->size--;
			return deletedValue;
		}
		Node* nextNode = prevNode->next->next;
		deletedValue = prevNode->next->value;
		prevNode->next = nextNode;
		nextNode->prev = prevNode;
		this->size--;
		return deletedValue;
	}

	int find(int value) {
		Node* temp = this->head;
		int index = 0;
		while (temp) {
			if (value == temp->value) {
				return index;
			}
			temp = temp->next;
			index++;
		}
		return -1;
	}

	int findByIndex(int index) {
		if (index < 0 || index >= this->size || this->isEmpty()) {
			cout <<"Index does not exists !" << endl;
			return -1;
		}
		return this->getNode(index)->value;
	}

	void reverse() {
		Node* temp = NULL;
      Node* curr = this->head;

		while (curr) {
			temp = curr->prev;
         curr->prev = curr->next;
         curr->next = temp;
         curr = curr->prev;
		}
      if(temp != NULL){
         this->head = temp->prev;
      }
	}

	Node* getNode(int index) {
		Node* temp = this->head;
		int i = 0;
		while (i < index) {
			temp = temp->next;
			i++;
		}
		return temp;
	}

	void print() {
		if (this->isEmpty()) return;

		Node* temp = this->head;
		cout << "Head <-> ";
		while (temp) {
			cout << temp->value << " <-> ";
			temp = temp->next;
		}
		cout << "Tail" << endl;
	}
};

int main() {
	DoublyLinkedList* dList = new DoublyLinkedList();
	cout <<"Is String Empty: " <<  dList->isEmpty() << endl;
	cout <<"Size of Doubly Linked List : " << dList->getSize() << endl;
	dList->prepend(10);
	dList->prepend(20);
	dList->prepend(30);
	dList->print();
	dList->append(40);
	dList->append(50);
	dList->append(60);
	dList->print();
	cout <<"Size of Doubly Linked List : " << dList->getSize() << endl;
	dList->insert(3, 70);
	dList->insert(4, 80);
	dList->insert(5, 90);
	dList->print();
	dList->deleteByIndex(1);
	dList->deleteByIndex(3);
	dList->deleteByIndex(3);
	dList->print();
	cout <<"Size of Doubly Linked List : " << dList->getSize() << endl;
	cout <<"Find : " << dList->find(70) << endl;
	cout <<"FindByIndex : " << dList->findByIndex(3) << endl;
	dList->reverse();
	dList->print();

   return 0;
}


