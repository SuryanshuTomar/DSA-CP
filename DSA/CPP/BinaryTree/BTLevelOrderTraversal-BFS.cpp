// https : //
// leetcode.com/problems/binary-tree-level-order-traversal/submissions/

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

  vector<vector<int>> levelOrder(Node *root) {
    // return empty vector if the root is NULL.
    if (!root)
      return {};

    vector<vector<int>> result;
    vector<int> currentLevelElem = {};
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
      Node *currentNode = q.front();
      q.pop();

      // This means the current level is not traversed
      // So, we will push the current level elements into our result vector.
      // and now set the currentLevelElem to new vector so that we can now again
      // store the elements of the next level in it.
      if (currentNode == NULL) {
        result.push_back(currentLevelElem);
        currentLevelElem = {};

        // if the queue q is not empty this means are still elements in the next
        // level of the tree
        if (!q.empty()) {
          q.push(NULL);
        }
      }
      // this else will run if the currenNode is not NULL.
      else {
        // storing the elements in the curreLevelElem vector for the current
        // level
        currentLevelElem.push_back(currentNode->value);
        if (currentNode->left)
          q.push(currentNode->left);
        if (currentNode->right)
          q.push(currentNode->right);
      }
    }
    return result;
  }
};

int main() {
  BinaryTree *bt = new BinaryTree();

  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  Node *root = bt->buildTree(NULL);

  cout << "Level Order Traversal : " << endl;
  bt->levelOrderTraversal(root);
  //      1,
  //    3, 5,
  //  7, 11, 17,
  return 0;
}