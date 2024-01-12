class Solution {
public:
    bool halvesAreAlike(string s) {
      vector<string>A;
      vector<string>B;
      int Size=s.size();
      int result1=0;int result2=0;
      for (int i=0, j=Size/2; i <Size/2; i++, j++) {
            A.push_back(string(1,s[i]));
            B.push_back(string(1,s[j])); 
        }
      Vowel(A,B,result1,result2);
      return result1==result2;
    }
  void Vowel(vector<string> &A,vector<string> &B,int &result1,int &result2)
  {  
    if(A.empty() || B.empty())
      {
        return;
      }
    for(int i=0;i<A.size();i++)
    {
      if(A[i]=="a" || A[i]=="A" || A[i]=="e" || A[i]=="E" || A[i]=="i" || A[i]=="I" || A[i]=="o" || A[i]=="O" || A[i]=="u" || A[i]=="U")
      {
        result1++;
      }
      if(B[i]=="a" || B[i]=="A" || B[i]=="e" || B[i]=="E" || B[i]=="i" || B[i]=="I" || B[i]=="o" || B[i]=="O" || B[i]=="u" || B[i]=="U")
      {
        result2++;
      }
    }
  }
};
