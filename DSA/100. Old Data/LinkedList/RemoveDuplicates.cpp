// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

#include "LinkedListWithTail.cpp"
#include <iostream>

using namespace std;

Node *deleteDuplicates(Node *head) {
  Node *currNode = head;

  if (head == NULL) {
    return NULL;
  }

  while (currNode != NULL && currNode->next != NULL) {
    if (currNode->value == currNode->next->value) {
      currNode->next = currNode->next->next;
    } else {
      currNode = currNode->next;
    }
  }
  return head;
}

int main() {
  LinkedListWithTail *list = new LinkedListWithTail();
  list->append(1);
  list->append(2);
  list->append(2);
  list->append(3);
  list->append(4);
  list->append(4);
  list->print();

  Node *head = deleteDuplicates(list->head);
  list->print();

  return 0;
}

// ----------------------------------------------------------------------------------------------
// LeetCode Solution -

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//   ListNode *deleteDuplicates(ListNode *head) {
//     ListNode *currNode = head;

//     if (head == NULL) {
//       return NULL;
//     }

//     while (currNode != NULL && currNode->next != NULL) {
//       if (currNode->val == currNode->next->val) {
//         currNode->next = currNode->next->next;
//       } else {
//         currNode = currNode->next;
//       }
//     }
//     return head;
//   }
// };