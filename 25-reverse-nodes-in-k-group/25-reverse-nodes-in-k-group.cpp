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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ///for ll of size<k
       ListNode* temp=head;
        for(int i=0;i<k;i++)
        {
            if(temp==NULL)
                return head;
            temp=temp->next;
        }
        
        // reverse first k nodes then recursive
        ListNode* cur=head;
        ListNode* prev=NULL;
        ListNode* nextp;
        
        // if(head==NULL)
        //     return head;
       
         for(int i = 0; i < k; i++){
           nextp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nextp;
          
           
        }
       if(nextp!=NULL)
       {
           head->next=reverseKGroup(nextp,k);
       }
        return prev;
    }
};