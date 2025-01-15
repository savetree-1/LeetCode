/*
By  :-: savetrees
Used:-: Monotonic Stack
*/
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* h) {
        vector<int> v, r;
        ListNode* c = h;
        while (c) {
            v.push_back(c->val);
            c = c->next;
        }
        r = vector<int>(v.size(), 0);
        stack<int> s;
        for (int i = 0; i < v.size(); ++i) {
            while (!s.empty() && v[s.top()] < v[i]) {
                r[s.top()] = v[i];
                s.pop();
            }
            s.push(i);
        }
        return r;
    }
};
