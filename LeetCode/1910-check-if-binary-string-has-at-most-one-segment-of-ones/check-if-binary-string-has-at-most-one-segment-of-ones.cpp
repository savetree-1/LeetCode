class Solution {
public:
    bool checkOnesSegment(string s) {
    int count=0;
        if(s.length()==1)return s[0]=='1';
        if(s[0]=='1')count=1;
      for(int i=1;i<s.length();i++)
      {
        if(s[i]=='1' && s[i-1]!='1')count++;
      }  
      return count==1;
    }
};