class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st(nums.begin(),nums.end());
        vector<int>temp(st.begin(),st.end());
        if(temp.size()<3)return temp.back();
        else return temp[temp.size()-3];
    }
};