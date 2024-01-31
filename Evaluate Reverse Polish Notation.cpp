class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int>s;
    int n1,n2;
 for(int i=0;i<tokens.size();i++)
 {
     if(tokens[i]=="+"|| tokens[i]=="-" || tokens[i]=="/"|| tokens[i]=="*")
     {
         string op=tokens[i];
         n2=s.top();
         s.pop();
         n1=s.top();
         s.pop();
         if(op=="+")
         {
             s.push(n1+n2);
         }
         else if(op=="-")
         {
             s.push(n1-n2);
         }
         else if(op=="/")
         {
             s.push(n1/n2);
         }
         else if(op=="*")
         {
             s.push(n1*n2);
         }
     }
     else
     {
         s.push(stoi(tokens[i]));
     }
 }
      return s.top();
    }
};
