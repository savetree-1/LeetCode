class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> mpp;
        for(char c : word) {
            mpp[c]++;
        }
        if(mpp.size() == 1) return true;   
        int mini = INT_MAX, maxi = 0;
        for(auto &p : mpp) {
            mini = min(mini, p.second);
            maxi = max(maxi, p.second);
        }
        int cntMin = 0, cntMax = 0;
        for(auto &p : mpp) {
            if(p.second == mini) cntMin++;
            if(p.second == maxi) cntMax++;
        }
        int size = mpp.size();
        if(mini == 1 && maxi == 1) return true;
        if(mini == 1 && cntMin == 1 && cntMax == size - 1)
            return true;
        if(maxi - mini == 1 && cntMax == 1 && cntMin == size - 1)
            return true;
        return false;
    }
};
