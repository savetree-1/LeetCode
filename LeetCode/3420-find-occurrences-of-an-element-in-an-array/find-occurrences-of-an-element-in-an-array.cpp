class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& q, int x) {
       vector<int>arr;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==x)
        {
            arr.push_back(i);
        }
       }
       vector<int>res(q.size(),-1);
       for(int i=0;i<q.size();i++)
       {
        if(q[i]<=arr.size())
        {
            res[i]=arr[q[i]-1];
        }
       }
       return res;
    }
};