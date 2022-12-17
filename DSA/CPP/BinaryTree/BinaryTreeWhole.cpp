// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }

  Node *buildTree(Node *root) {
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new Node(data);

    // Base case: -1 means the node is leaf node and does not have any child
    if (data == -1) {
      return NULL;
    }

    cout << "For inserting in left : " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right : " << data << endl;
    root->right = buildTree(root->right);
    return root;
  }
};

void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();

    if (temp == NULL) {
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if (temp->left)
        q.push(temp->left);
      if (temp->right)
        q.push(temp->right);
    }
  }
}

void inOrderTraversal(Node *root) {
  // Base Case: if root is NULL then return to the leaf node
  if (root == NULL)
    return;

  inOrderTraversal(root->left);
  cout << root->data << " -> ";
  inOrderTraversal(root->right);
}

void preOrderTraversal(Node *root) {
  // Base Case: if root is NULL then return to the leaf node
  if (root == NULL)
    return;

  cout << root->data << " -> ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root) {
  // Base Case: if root is NULL then return to the leaf node
  if (root == NULL)
    return;

  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout << root->data << " -> ";
}

void buildTreeFromLevelOrder(Node *&root) {
  queue<Node *> q;
  cout << "Enter data for root : " << endl;
  int data;
  cin >> data;
  root = new Node(data);
  q.push(root);

  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();

    cout << "Enter the left node for " << temp->data << endl;
    int leftData;
    cin >> leftData;

    if (leftData != -1) {
      temp->left = new Node(leftData);
      q.push(temp->left);
    }

    cout << "Enter the left node for " << temp->data << endl;
    int rightData;
    cin >> rightData;

    if (rightData != -1) {
      temp->right = new Node(rightData);
      q.push(temp->right);
    }
  }
}

int main() {
  // Write C++ code here
  cout << "-------- CREATION OF BINARY TREE --------" << endl;

  // Data - 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  Node *root = new Node(-1);
  root = root->buildTree(root);

  cout << endl << "-------- LEVEL ORDER TRAVERSAL --------" << endl;
  levelOrderTraversal(root);

  cout << endl << "-------- IN-ORDER ORDER TRAVERSAL --------" << endl;
  inOrderTraversal(root);
  cout << " X" << endl; // Left Node Right

  cout << endl << "-------- PRE-ORDER ORDER TRAVERSAL --------" << endl;
  preOrderTraversal(root);
  cout << " X" << endl; // Node Left Right

  cout << endl << "-------- POST-ORDER ORDER TRAVERSAL --------" << endl;
  postOrderTraversal(root);
  cout << " X" << endl; // Left Right Node

  // Data - 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 -1
  cout << endl << "-------- TREE FROM LEVEL ORDER TRAVERSAL --------" << endl;
  buildTreeFromLevelOrder(root);
  levelOrderTraversal(root);

  return 0;
}