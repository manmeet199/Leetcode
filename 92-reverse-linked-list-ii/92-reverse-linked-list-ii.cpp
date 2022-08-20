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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* cur=head;
       ListNode* prev=head;
        stack<int> s;
        for(int i=0; i<left-1; i++)
        {
            cur=cur->next;
            prev=prev->next;
            
        }
        for(int i=0; i<=(right-left); i++)
        {
            s.push(cur->val);
            cur=cur->next;
        }
        while(!s.empty())
        {
            prev->val=s.top();
            
            s.pop();
            prev=prev->next;
        }
        return head;
    }
};