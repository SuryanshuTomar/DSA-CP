// https://leetcode.com/problems/middle-of-the-linked-list/submissions/

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

class Solution {
public:
  // Approach 2: Two Pointer (fast and slow)
  ListNode *middleNode(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;

    while (fast != NULL && fast->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }

  // Approach 1: Iterative
  //     ListNode* middleNode(ListNode* head) {
  //         int len = 0;
  //         ListNode* temp = head;

  //         while(temp != NULL){
  //             len++;
  //             temp = temp->next;
  //         }
  //         temp = head;
  //         int i = 0;
  //         while(i < len / 2){
  //             i++;
  //             temp = temp->next;
  //         }
  //         return temp;
  //     }
};