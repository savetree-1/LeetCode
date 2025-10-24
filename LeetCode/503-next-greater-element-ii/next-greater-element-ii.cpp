class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,-1);
        stack<int>st;
        int i=2*n-1;
        while(i>=0)
        {
            int val=nums[i%n];
            while(!st.empty() && st.top()<=val)st.pop(); 
            if(i<n)
            {
                if(!st.empty())
                {
                    res[i]=st.top();
                }
                else
                {
                    res[i]=-1;
                }
            }
            st.push(val);
            i--;        
        }
        return res;

        
    }
};