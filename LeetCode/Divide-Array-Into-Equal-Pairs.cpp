/*
By   :: savetrees
Used :: BitSet
*/
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bitset <501> bs (0);        
        for (auto num : nums) bs.flip(num);
        return bs.none();
    }
};