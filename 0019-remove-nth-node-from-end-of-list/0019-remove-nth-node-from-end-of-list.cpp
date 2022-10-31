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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        for(int i=0; i<n; i++)
        {
            slow=slow->next;
        }
        ListNode* fast=head;
        if(!slow)
        {
            return head->next;//imp
        }
        while(slow->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=fast->next->next;
        
        return head;
    }
};