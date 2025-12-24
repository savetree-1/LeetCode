class Solution {
public:
    bool checkRecord(string s) {
        int n=count(s.begin(), s.end(), 'A');
        int len =s.length();
        bool check=false;
        for(int i=0;i<len;i++)
        {
            if(i<len-2 && s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
            {
                check=true;
                break;
            }
        }
        if(!check && n<2)return true;
        return false;
    }
};