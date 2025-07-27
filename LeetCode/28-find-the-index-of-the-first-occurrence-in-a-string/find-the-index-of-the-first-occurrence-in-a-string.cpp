class Solution {
public:
    int strStr(string h, string n) {
        vector<int>lps(n.size(),0);
        lps[0]=0;
        int i=1;
        int len=0;
        while(i<n.size())
        {
            if(n[i]==n[len])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len!=0)
                {
                    len=lps[len-1];
                }
                else
                {
                    lps[len]=0;
                    i++;
                }
            }
        }
        i=0;int j=0;
        while(i<h.size())
        {
            if(h[i]==n[j])
            {
                i++;j++;
            }
            if(j==n.size())
            {
                return i-j;
            }
            else if(i<h.size() && h[i]!=n[j])
            {
                if(j!=0)
                {
                    j=lps[j-1];
                }
                else
                {
                    i++;
                }
            }
        }
        return -1;

    }
};