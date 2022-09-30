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
    void reorderList(ListNode* head) {
        ListNode* tmp=head;
     if(!head or !head->next or !head->next->next)
         return;
        while(tmp->next->next)
        {
            tmp=tmp->next;
        }
        tmp->next->next=head->next;
        head->next=tmp->next;
        tmp->next=NULL;
        
        reorderList(head->next->next);
    }
};