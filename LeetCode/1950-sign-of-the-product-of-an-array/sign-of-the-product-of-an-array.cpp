class Solution {
public:
    int arraySign(vector<int>& nums) {
        int flag=0;
        for(auto num:nums)
        {
            if(num<0)flag++;
            else if(num==0) return 0;
        }
        if(flag%2==0)return 1;
        return -1;
    }
};