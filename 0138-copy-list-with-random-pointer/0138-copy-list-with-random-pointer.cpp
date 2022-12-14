/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         unordered_map<Node*, Node*> mp;
        Node* cur=head;
       while(cur)
       {
           mp[cur]=new Node(cur->val);
           cur=cur->next;
       }
        cur=head;
        while(cur)
        {
            Node* tmp=mp[cur];
            tmp->next=mp[cur->next];
            tmp->random=mp[cur->random];
            cur=cur->next;
        }
        return mp[head];
            
//         Node* iter=head;
//         Node* front=head;
//         while(iter!=NULL)
//         {
//             front=iter->next;
//             Node* copy=new Node(iter->val);
//             iter->next=copy;
//             copy->next=front;
//             iter=front;
//         }
        
        
//         iter=head;
//         while(iter!=NULL)
//         {
//             if(iter->random!=NULL)
//             {

//             iter->next->random=iter->random->next;
//             }
            
//         iter=iter->next->next;    
//         }
        
        
//         iter=head;
//         Node *pseudohead=new Node(0);
//         Node* copy=pseudohead;
        
//         while(iter!=NULL)
//         {
//             front=iter->next->next;
           
            
//             copy->next=iter->next;
//             iter->next=front;
            
//             iter=iter->next;
//             copy=copy->next;
            
            
//         }
        
        
//         return pseudohead->next;
    }
};