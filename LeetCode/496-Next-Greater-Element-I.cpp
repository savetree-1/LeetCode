/*
By     :-: savetrees
Used :-: Map
*/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n, vector<int>& m) {
        stack<int>son;
        unordered_map<int, int> mpp;
        vector<int> dum(n.size());
        for (int i = m.size() - 1; i >= 0; --i) {
            while(!son.empty()&&son.top()<=m[i])son.pop();
            mpp[m[i]] = son.empty()?-1:son.top();
            son.push(m[i]);}
        for (int i = 0; i < n.size(); ++i) dum[i] = mpp[n[i]];
        return dum;}};