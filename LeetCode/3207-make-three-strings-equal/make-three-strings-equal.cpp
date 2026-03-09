class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int count=0;
        for(int i=0;i<s1.size();i++)
        {
           if(s1[i]==s2[i] && s1[i]==s3[i])
           {
                count++;
           }
           else
           {
            break;
           }
        }
        if(count==0)return -1;
        return s1.size()+s2.size()+s3.size()-3*count;
    }
};