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
  Node *buildTree(Node *root) {
    cout << "Enter Value : ";
    int value;
    cin >> value;
    if (value == -1) {
      return NULL;
    }
    root = new Node(value);

    cout << "for left of " << value << endl;
    root->left = buildTree(root->left);

    cout << "for right of " << value << endl;
    root->right = buildTree(root->right);

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
        // this means queue still has some child nodes
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

  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  Node *root = bt->buildTree(NULL);

  cout << "Level Order Traversal : " << endl;
  bt->levelOrderTraversal(root);
  return 0;
}