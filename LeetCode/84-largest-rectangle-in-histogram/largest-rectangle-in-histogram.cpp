class Solution {
public:
   int largestRectangleArea(vector<int>& h) {
    stack<int> st;
    int ans = 0;
    int n = h.size();

    for (int i = 0; i <= n; i++) {
        int cur;
        if (i == n) cur = 0;
        else cur = h[i];

        while (!st.empty() && cur < h[st.top()]) {
            int ht = h[st.top()];
            st.pop();

            int wd;
            if (st.empty()) wd = i;
            else wd = i - st.top() - 1;

            ans = max(ans, ht * wd);
        }
        st.push(i);
    }
    return ans;
}

};