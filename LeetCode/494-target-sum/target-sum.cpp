typedef vector<int> vi;
class Solution {
public:
    int findTargetSumWays(vi& nums, int target) {
        int total = 0;
        for(int x : nums) total += x;
        if((target + total) % 2 != 0 || abs(target) > total) return 0;

        int subsetSum = (target + total) / 2;
        return func(nums, 0, subsetSum);
    }
    int func(vi &arr, int index, int rem) {
        if(index == arr.size()) return rem == 0 ? 1 : 0;
        int inc = 0;
        if(arr[index] <= rem)
            inc = func(arr, index + 1, rem - arr[index]);
        int exc = func(arr, index + 1, rem);
        return inc + exc;
    }
};
