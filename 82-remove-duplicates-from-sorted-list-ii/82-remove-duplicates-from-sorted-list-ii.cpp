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
    ListNode* deleteDuplicates(ListNode* head) {
     if(head == NULL || head->next == NULL) return head;
        ListNode* next = head->next;
        
        if(next->val == head->val){
            while(next != NULL && next->val == head->val) next = next->next;
            return deleteDuplicates(next);
        } else {
            head->next = deleteDuplicates(next);
            return head;
        }
    }
    
};