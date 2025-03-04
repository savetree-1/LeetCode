/*

*/
class Solution {
public:
    int isValid(int check,vector<int>& weights,int days) {
        int count=1,pre=0;
        for (int num : weights) {
            pre+=num;
            if (pre>check) {
                count++;
                pre=num;
            }
        }
        return count;
    }
    
    int shipWithinDays(vector<int>& weights,int days) {
        int maxi=0,sum=0;
        for (int num:weights) {
            maxi=max(maxi,num);
            sum+=num;
        }
        int low=maxi,high=sum;
        while (low<=high) {
            int mid=low+(high-low)/2;
            int dummy=isValid(mid,weights,days);
            if (dummy>days)low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};
