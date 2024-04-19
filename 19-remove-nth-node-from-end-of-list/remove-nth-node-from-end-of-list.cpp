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