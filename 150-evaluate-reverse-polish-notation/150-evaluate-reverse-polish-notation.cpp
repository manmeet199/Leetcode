class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     int n=tokens.size();
        stack<int> s;
        for(auto it: tokens)
        {
            if(it=="+" or it=="-" or it=="/" or it=="*")
            {
                int op1=s.top();
                s.pop();
                int op2=s.top();
                s.pop();
                if(it=="+") op1=op2+op1;
                  if(it=="-") op1=op2-op1;
                  if(it=="*") op1=op2*op1;
                  if(it=="/") op1=op2/op1;
                s.push(op1);
            }
            else
            {
                s.push(stoi(it));
            }
            
            
        }
        return s.top();   
    }
};