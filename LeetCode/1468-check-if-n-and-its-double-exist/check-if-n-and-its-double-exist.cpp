typedef unordered_map<long long ,long long> mpi;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        mpi mpp;
        for(int num:arr)mpp[num]++;
        for(auto &pair:mpp)
        {      
            long long val = pair.first;
            if(val == 0) {
                if(mpp[val] >= 2) return true;
            } else {
                if(mpp.find(val * 2) != mpp.end()) return true;
            }
        }
        return false;
    }
};