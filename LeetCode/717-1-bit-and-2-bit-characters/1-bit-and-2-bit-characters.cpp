class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size()==1)
        {
            if(bits[0]==0)return true;
            return false;
        }
        int i=0;
        while(i<bits.size())
        {
            if(bits[i]==1)i+=2;
            else i++;
            if(i==bits.size()-1 && bits[i]==0)return true;
        }  
        if(i<bits.size())return true;
        return false;
    }
};