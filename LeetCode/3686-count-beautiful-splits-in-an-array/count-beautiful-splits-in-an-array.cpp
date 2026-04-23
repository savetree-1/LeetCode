#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautifulSplits(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0;

        vector<vector<int>> lcp(n, vector<int>(n, 0));

        for(int i = n-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                if(nums[i] == nums[j]) {
                    if(i+1 < n && j+1 < n)
                        lcp[i][j] = 1 + lcp[i+1][j+1];
                    else
                        lcp[i][j] = 1;
                }
            }
        }

        int count = 0;

        for(int i = 0; i <= n-3; i++) {
            for(int j = i+1; j <= n-2; j++) {

                int len1 = i + 1;
                int len2 = j - i;
                int len3 = n - (j + 1);

                bool check1 = (len1 <= len2) && (lcp[0][i+1] >= len1);
                bool check2 = (len2 <= len3) && (lcp[i+1][j+1] >= len2);

                if(check1 || check2) count++;
            }
        }

        return count;
    }
};