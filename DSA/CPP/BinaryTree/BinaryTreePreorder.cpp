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

  // PostOrder Flow -> NLR(Node, Left, Right)
  void preOrderTraversal(Node *root) {
    if (root == NULL) {
      return;
    }

    cout << root->value << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
  }
};

int main() {
  BinaryTree *bt = new BinaryTree();

  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  Node *root = bt->buildTree(NULL);
  // Tree Created
  //       1
  //      / \
  //     3   5
  //    / \   \
  //   7  15  17

  cout << "Pre Order Traversal : " << endl;
  bt->preOrderTraversal(root); // 1 3 7 11 5 17
  return 0;
}