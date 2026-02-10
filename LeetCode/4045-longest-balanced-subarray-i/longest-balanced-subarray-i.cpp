class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for (int i=0;i<n;i++){
            unordered_map<int,int>fre;
            int eve=0,odd=0;
            for (int j=i;j<n;j++){
                if(fre[nums[j]]==0)
                {
                    if(nums[j]%2==0)eve++;
                    else odd++;
                }
                fre[nums[j]]++;
                if(eve==odd)
                {
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};
