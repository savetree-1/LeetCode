typedef long long ll;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        ll total=grid.size();
        ll sum1=0;
        ll sq_sum1=0;
        ll rsum1=0;
        ll rsq_sum1=0;
        for(int i=1;i<=total*total;i++)
        {
            sum1+=i;
            sq_sum1+=i*i;
        }
        for(auto &arr:grid)
        {
            for(int num:arr)
            {
                rsum1+=num;
                rsq_sum1+=num*num;
            }
        }
        ll sum_diff=sum1-rsum1;
        ll sq_sum_diff=sq_sum1-rsq_sum1;
        int a=(sum_diff+(sq_sum_diff/sum_diff))/2;
        int b=abs(a-sum_diff);
        return {b,a};
    }
};