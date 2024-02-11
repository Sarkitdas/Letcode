class Solution {
public:
    int countSubstrings(string s) {
    int siz=s.size(),result=0;
    string new_s="";
    for(int i=0;i<siz-1;i++)
    {
        new_s=s[i];
        result++;
        for(int j=i+1;j<siz;j++)
        {
            new_s+=s[j];
            string flip=new_s;
            reverse(flip.begin(),flip.end());
            if(new_s==flip)
            {
                result++;
            }
        }
    }
      return result+1;
    }
};
