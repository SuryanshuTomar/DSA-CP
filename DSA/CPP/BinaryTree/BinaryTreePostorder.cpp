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

  // PostOrder Flow -> LRN(Left, Right, Node)
  void postOrderTraversal(Node *root) {
    if (root == NULL) {
      return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->value << " ";
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

  cout << "Post Order Traversal : " << endl;
  bt->postOrderTraversal(root); // 7 11 3 17 5 1
  return 0;
}