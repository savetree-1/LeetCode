/*
By   ::
Used :: Backtracking
*/
typedef unordered_map<string,bool> mp;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total%2!=0)return false;
        int target=total/2;
        mp memo;
        //return back_track(nums,0,target);
        return dp(nums,0,target,memo);
    }
    //bool back_track(vector<int>&nums,int index,int rem)
    bool dp(vector<int>&nums,int index,int rem,mp &memo)
    {
        if(rem==0)return true;
        if(index>=nums.size()||rem<0)return false;
        string key=to_string(index)+","+to_string(rem);
        if(memo.find(key)!=memo.end())return memo[key];
        //if(back_track(nums,index+1,rem-nums[index]))return true;
        //if(back_track(nums,index+1,rem))return true;
        bool result=dp(nums,index+1,rem-nums[index],memo)||dp(nums,index+1,rem,memo);
        memo[key]=result;
        return result;
    }
};