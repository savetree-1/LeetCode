/*
By   :: savetrees
Used :: Heaps
*/
typedef long long ll;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    priority_queue<ll,vector<ll>,greater<ll>>pq(nums.begin(),nums.end());
    int ops=0;
    while (pq.top()<k) {
        ll x=pq.top();pq.pop();
        ll y=pq.top();pq.pop();
        pq.push(x*2+y);
        ops++;
    }
    return ops;
}
};