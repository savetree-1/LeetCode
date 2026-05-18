class Solution {
public:
    vector<int>lps(string pat)
    {
        int m=pat.size();
        vector<int>lps(m,0);
        int len=0;
        int i=1;
        while(i<m)
        {
            if(pat[i]==pat[len])
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
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
    }
    int strStr(string txt, string pat)
    {
        int n=txt.size();
        int m=pat.size();
        vector<int>arr=lps(pat);
        int i=0;
        int j=0;
        while(i<n)
        {
            if(txt[i]==pat[j])
            {
                i++;
                j++;
            }
            if(j==m)
            {
                return i-j;
            }
            else if(i<n && txt[i]!=pat[j])
            {
                if(j!=0)
                {
                    j=arr[j-1];
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