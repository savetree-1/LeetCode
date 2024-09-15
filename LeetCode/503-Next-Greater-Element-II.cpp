/*
By   :-: savetrees
Used :-: Monotonic Stack
*/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();vector<int> son(n, -1);stack<int> st;
        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i % n]) st.pop();
            if (i < n) son[i] = !st.empty() ? st.top() : -1;
            st.push(nums[i % n]);}
        return son;}};
