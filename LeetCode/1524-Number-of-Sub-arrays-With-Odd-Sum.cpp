/*
By   :: savetrees
Used :: Prefix Sum
*/
#define MOD 1000000007
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int count=0;
        int prefix_sum=0;
        int odd_count=0;
        int even_count=1;
        for(int num:arr)
        {
            prefix_sum+=num;
            if(prefix_sum&1)
            {
                count+=even_count; 
                odd_count++;
            }
            else
            {
                count+=odd_count;
                even_count++;
            }
            count%=MOD;
        }
        return count;
    }
};