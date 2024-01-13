class Solution {
public:
    int minSteps(string s, string t) {
      sort(s.begin(),s.end());
      string uniq=s;
      int output=0;
      auto it=unique(uniq.begin(),uniq.end());
      uniq.erase(it,uniq.end());
      checkElement(uniq,s,t,output);
      return output;
    }
  void checkElement(string uniq,string s,string t,int &output)
    {
    int result1,result2;
    for(int i=0;i<uniq.size();i++)
      {
        result1=count(s.begin(),s.end(),uniq[i]);
        result2=count(t.begin(),t.end(),uniq[i]);
        if(result1>result2)
        {
          int need=result1-result2;
          output+=need;
        }
      }
    }
};
