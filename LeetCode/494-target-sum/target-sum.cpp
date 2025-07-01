/*
By   :: 
Used :: Memoization
*/
typedef vector<int> vi;
typedef vector<vi> vvi;
class Solution {
public:
    int findTargetSumWays(vi& nums, int target) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if((target+total)%2!=0||abs(target) > total) return 0;
        int subsetSum=(target+total)/2;
        vvi memo(nums.size()+1,vi(subsetSum+1,-1));
        return func(nums, 0, subsetSum,memo);
    }
    int func(vi &arr, int index, int rem,vvi &memo) {
        if(index==arr.size())return rem==0?1:0;
        if(memo[index][rem]!=-1)return memo[index][rem];
        int inc=0;
        if(arr[index] <= rem)
            inc=func(arr, index + 1, rem - arr[index],memo);
        int exc=func(arr, index + 1, rem,memo);
        return memo[index][rem]=inc+exc;
    }
};
