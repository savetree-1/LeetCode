class Solution {
public:
    int strStr(string h, string n) {
        if(n.length()>h.length())return -1;
        for(int i=0;i<h.length();i++)
        {
            int j=0;
            int dum=i;
            while(h[dum]==n[j])
            {
                dum++;j++;
                if(j==n.length())return dum-n.length();
            }
        }
        return -1;
    }
};