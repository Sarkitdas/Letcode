class Solution {
public:
    int minimumLength(string s) {
        int result=0;
    for(int i=0,j=s.length()-1;i<j;i++,j--)
    {
        if(s[i]==s[j])
        {
            if(s[i]==s[i+1])
            {
                s[i]=0;
                if(j-i==1)
                {
                    s[j]=0;
                }
                j++;
            }
            else if(s[j]==s[j-1])
            {
                s[j]=0;
                i--;
            }
            else
            {
                s[i]=0;
                s[j]=0;
            }
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=0)
        {

            result++;
        }
    }
    return result;
    }
};
