class Solution {
public:
    vector<int> lps_(string s)
    {
        int n =s.size();
        vector<int>lps(n,0);
        int len=0;
        int i=1;
        while(i<n)
        {
            if(s[i]==s[len])
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
    bool kmp(string pat,string txt)
    {
        int n= txt.size();
        int m=pat.size();
        vector<int>lps=lps_(pat);
        int i=0;
        int j=0;
        while(i<n)
        {
            if(pat[j]==txt[i])
            {
                i++;j++;
            }
            if(j==m)
            {
                return true;
                j=lps[j-1];
            }
            else if(i<n && pat[j]!=txt[i])
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
        return false;
    }
    int repeatedStringMatch(string a, string b)
    {
        int count=1;
        string temp=a;
        while (a.length() < b.length()){
        a+=temp;
        count++;
        }
        if(kmp(b, a))return count;
        a += temp;
        count++;
        if (kmp(b, a))return count;
        return -1;
    }
};