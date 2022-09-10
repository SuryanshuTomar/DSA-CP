// Merge Two Sorted Linked List
// https://leetcode.com/problems/merge-two-sorted-lists/submissions/

#include "LinkedListWithTail.cpp"
#include <iostream>
using namespace std;



int main() { return 0; }


// -------------------------------------------------------------------------------------------
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
//   ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
//     ListNode *prev = nullptr;
//     ListNode *head = nullptr;
//     while (list1 && list2) {
//       ListNode *cur = new ListNode();
//       if (list1->val <= list2->val) {
//         cur->val = list1->val;
//         list1 = list1->next;
//       } else {
//         cur->val = list2->val;
//         list2 = list2->next;
//       }

//       if (!head) {
//         head = cur;
//         prev = cur;
//       } else {
//         prev->next = cur;
//         prev = cur;
//       }
//     }
//     while (list1 && !list2) {
//       ListNode *cur = new ListNode();
//       cur->val = list1->val;
//       list1 = list1->next;

//       if (!head) {
//         head = cur;
//         prev = cur;
//       } else {
//         prev->next = cur;
//         prev = cur;
//       }
//     }

//     while (!list1 && list2) {
//       ListNode *cur = new ListNode();
//       cur->val = list2->val;
//       list2 = list2->next;

//       if (!head) {
//         head = cur;
//         prev = cur;
//       } else {
//         prev->next = cur;
//         prev = cur;
//       }
//     }

//     return head;
//   }
// };