/*
By   :: savetrees
Used :: Binary Search
*/
class Solution {
public:
    int hIndex(vector<int>& ct){
    int n = ct.size(), l = 0, r = n;
    while(l < r){
        int mid = (l + r) / 2;
        if(ct[mid] >= n - mid) r = mid;
        else l = mid + 1;
    }
    return n - l;
}
};
