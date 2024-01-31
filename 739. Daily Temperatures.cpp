
class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
    vector<int>r(temperatures.size(),0);    //initially all elements are 0
    stack<int>s;
    for(int i=temperatures.size()-1;i>=0;i--)
    {
     while(!s.empty() && temperatures[i]>=temperatures[s.top()])
     {
         s.pop();
     }
     if(!s.empty())
     {
         r[i]=s.top()-i;
     }
     s.push(i);
      }
      return r;
    }
};
