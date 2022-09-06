#include <iostream>
using namespace std;

class Node {
public:
  int value;
  Node *left;
  Node *right;
  Node(int value) {
    this->value = value;
    this->left = NULL;
    this->right = NULL;
  }
};

class BinaryTree {
public:
  Node *buildTree(Node *root) {
    cout << "Enter value : ";
    int value;
    cin >> value;
    root = new Node(value);

    if (value == -1) {
      return NULL;
    }

    cout << "For inserting in left : " << value << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right : " << value << endl;
    root->right = buildTree(root->right);

    return root;
  }
};

int main() {
  BinaryTree *bt = new BinaryTree();
  Node *root = bt->buildTree(NULL);

  // Tree Created
  //       1
  //      / \
  //     3   5
  //    / \   \
  //   7  15  17

  return 0;
}