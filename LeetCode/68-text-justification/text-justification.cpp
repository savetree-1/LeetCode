class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        int n=words.size();
        int i=0;
        while(i<n)
        {
            int j=i;
            int len=0;
            while(j<n && len+words[j].size()+(j-i)<=maxWidth)
            {
                len+=words[j].size();
                j++;
            }
            int gaps=j-i-1;
            string line="";
            if(j==n || gaps==0)
            {
                for(int k=i;k<j;k++)
                {
                    line+=words[k];
                    if(k!=j-1)
                    {
                        line+=" ";
                    }
                }
                while(line.size()<maxWidth)line+=" ";
            }
            else
            {
                int spaces=maxWidth-len;
                int each=spaces/gaps;
                int extra=spaces%gaps;
                for(int k=i;k<j-1;k++)
                {
                    line+=words[k];
                    int count=each;
                    if(extra>0)
                    {
                        count++;
                        extra--;
                    }
                    while(count--)
                    {
                        line+=" ";
                    }
                }
                line+=words[j-1];
            }
            ans.push_back(line);
            i=j;
        }
        return ans;
    }
};