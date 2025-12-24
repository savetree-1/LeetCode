class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> vis(n, false);

        int cur = 0;
        int step = 1;

        while (!vis[cur]) {
            vis[cur] = true;
            cur = (cur + step * k) % n;
            step++;
        }

        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) res.push_back(i + 1);
        }
        return res;
    }
};
