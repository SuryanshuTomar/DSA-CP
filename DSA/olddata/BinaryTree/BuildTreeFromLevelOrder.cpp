#include <iostream>
#include <queue>
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
  Node *buildTreeFromLevelOrder(Node *root) {
    queue<Node *> q;
    cout << "Enter Root value : ";
    int rootVal;
    cin >> rootVal;
    root = new Node(rootVal);
    q.push(root);

    while (!q.empty()) {
      Node *currentNode = q.front();
      q.pop();

      cout << "Enter left node for : " << currentNode->value << endl;
      int leftVal;
      cin >> leftVal;
      if (leftVal != -1) {
        currentNode->left = new Node(leftVal);
        q.push(currentNode->left);
      }

      cout << "Enter right node for : " << currentNode->value << endl;
      int rightVal;
      cin >> rightVal;
      if (rightVal != -1) {
        currentNode->right = new Node(rightVal);
        q.push(currentNode->right);
      }
    }

    return root;
  }

  void levelOrderTraversal(Node *root) {
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
      Node *currentNode = q.front();
      q.pop();

      // meaning current Level of tree is printed
      if (currentNode == NULL) {
        cout << endl;
        // this means queue still has some child nodess
        if (!q.empty()) {
          q.push(NULL);
        }
      }
      // else will run if tree still has some child,
      // so print the next level
      else {
        cout << currentNode->value << ", ";

        if (currentNode->left)
          q.push(currentNode->left);
        if (currentNode->right)
          q.push(currentNode->right);
      }
    }
  }
};

int main() {
  BinaryTree *bt = new BinaryTree();
  // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
  Node *root = bt->buildTreeFromLevelOrder(NULL);

  cout << "Tree from Level Order Traversal : " << endl;
  bt->levelOrderTraversal(root);

  // Tree Created
  //       1
  //      / \
  //     3   5
  //    / \   \
  //   7  15  17

  return 0;
}