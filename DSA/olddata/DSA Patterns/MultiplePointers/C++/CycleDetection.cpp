// https://leetcode.com/problems/linked-list-cycle/

// Approach:
// 1. If the fast pointer reaches one step behind the slow pointer, Then, In the
// next step, the fast pointer will move 2 steps and slow pointer 1 step and
// they will meet.
// 2. If the fast pointer is two step behind the slow pointer, Then, In the next
// step, the fast pointer will be one step behind the slow pointer, which
// reduces this scenerio to the first scenario. This means that the two pointers
// will meet in the next iteration.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// class Solution {
// public:
//   bool hasCycle(ListNode *head) {
//     // making two pointers fast and slow and assignning them to head
//     ListNode *fast = head;
//     ListNode *slow = head;

//     // till fast and fast-> next not reaches NULL
//     // we will increment fast by 2 step and slow by 1 step
//     while (fast != NULL && fast->next != NULL) {
//       fast = fast->next->next;
//       slow = slow->next;

//       // At the point if fast and slow are at same address
//       // this means linked list has a cycle in it.
//       if (fast == slow) {
//         return true;
//       }
//     }
//     // if traversal reaches to NULL this means no cycle.
//     return false;
//   }
// };
