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
    ListNode* partition(ListNode* head, int x) {
        ListNode* node1=new ListNode(0);
        ListNode* node2=new ListNode(1);
        ListNode* ptr1=node1;
        ListNode* ptr2=node2;
        ListNode* cur=head;
        while(cur!=NULL)
        {
            if(cur->val<x)
            {
                node1->next=cur;
                node1=node1->next;
                
                
            }
            else
            {
                node2->next=cur;
                node2=node2->next;
                
            }
            cur=cur->next;
        }
        node1->next=ptr2->next;
        node2->next=NULL;
        return ptr1->next;;
    }
};