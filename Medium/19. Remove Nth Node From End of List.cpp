/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
*/


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

 /*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i =0; i<n; i++)
            fast = fast->next;
        
        if(fast == NULL)
            return head->next;

        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};
*/

// Removing memory complexity
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i =0; i<n; i++)
            fast = fast->next;
        
        if(fast == NULL)
        {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
            
        while(fast->next)
        {
            fast = fast->next;
            slow = slow->next;
        }

         // Remove the nth node from the end
        ListNode *node= slow->next;
        slow->next = slow->next->next;
        delete node;//avoid of memory leaks
        
        return head;
    }
};
