class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n= bits.size();
        if (bits[n-1]!=0)return false;
        for(int i=0;i<bits.size();i++)
        {
            if(i==n-1 && bits[i]==0)return true;
            if(bits[i]==1 && (bits[i+1]==1||bits[i+1]==0))
            {
                i++;
            }
        }
        return false;
    }
};               