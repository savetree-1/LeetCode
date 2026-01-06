class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0;
        if(s[0]=='1')count++;
        for(int i=1;i<s.length();i++)
        {
            if(s.length()>1 && s[i]=='1'&&s[i-1]=='0')
            {
                count++;
            }
        }
        return count==1 || count==0;
    }
};