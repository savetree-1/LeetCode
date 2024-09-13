/*
By   :-: savetrees
USed :-: BitWise XOR
*/
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> son(n + 1, 0);
        for (int i = 0; i < n; i++) {
            son[i + 1] = son[i] ^ arr[i];}
        vector<int> ans;
        for (auto& query : queries) {
            ans.push_back(son[query[1] + 1] ^ son[query[0]]);}
        return ans;}};