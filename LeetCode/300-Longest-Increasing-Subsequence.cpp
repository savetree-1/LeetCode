/* 
By   :: savetrees
Used :: DP + BS
*/
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
    if (nums.empty()) return 0;
    vector<int>subseq;
    for (int num:nums) {
        auto it=lower_bound(subseq.begin(),subseq.end(),num);
        if (it==subseq.end()) {
            subseq.push_back(num);
        } else {
            *it=num;
        }}
    return subseq.size();
}};