// Count Leaf Nodes
// https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055?leftPanelTab=0

// int getLeafCount(BinaryTreeNode<int> *root, int count) {
//   if (root == NULL) {
//     return count;
//   }

//   count = getLeafCount(root->left, count);
//   // Inorder traversal
//   if (root->left == NULL && root->right == NULL) {
//     count++;
//   }
//   count = getLeafCount(root->right, count);
//   return count;
// }

// int noOfLeafNodes(BinaryTreeNode<int> *root) {
//   // Write your code here.
//   int count = 0;
//   count = getLeafCount(root, count);
//   return count;
// }
