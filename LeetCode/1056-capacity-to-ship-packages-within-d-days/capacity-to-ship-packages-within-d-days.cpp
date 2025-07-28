class Solution {
public:
    bool isPossible(vector<int>& weights, int days, int cap) {
        int cur = 0, d = 1;
        for(int wt : weights) {
            if(cur + wt > cap) {
                d++;
                cur = 0;
            }
            cur += wt;
        }
        return d <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low <= high) { 
            int mid = (low + high) / 2;
            if(isPossible(weights, days, mid)) high = mid-1; 
            else low = mid + 1;
        }
        return low;
    }
};
