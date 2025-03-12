class Solution{  
public:  
    int maximumCount(vector<int>&nums){  
        int n=nums.size();  
        auto lb=lower_bound(nums.begin(),nums.end(),0);  
        auto ub=upper_bound(nums.begin(),nums.end(),0);  
        if(lb!=nums.end()&&*lb!=0){  
            auto it=lower_bound(nums.begin(),nums.end(),1);  
            return max(it-nums.begin(),n-(it-nums.begin()));  
        }  
        return max(lb-nums.begin(),n-(ub-nums.begin()));  
    }  
};  
