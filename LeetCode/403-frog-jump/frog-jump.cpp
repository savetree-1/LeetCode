/*
By   :: savetree-1
Used :: Recursion
*/
class Solution {
public:
    unordered_map<int, int> stonePos;
unordered_map<string, bool> memo;
    bool dfs(vector<int>& stones, int pos, int jump) {
        if (pos == stones.back()) return true;
        string key = to_string(pos) + "_" + to_string(jump);
        if (memo.count(key)) return memo[key];
        for (int step = jump - 1; step <= jump + 1; ++step) {
            if (step > 0 && stonePos.count(pos + step)) {
                if (dfs(stones, pos + step, step)) return memo[key] = true;}}
        return memo[key] = false;}
    bool canCross(vector<int>& stones) {
        for (int i = 0; i < stones.size(); i++) {stonePos[stones[i]] = i;}
        return dfs(stones, 0, 0);}
};