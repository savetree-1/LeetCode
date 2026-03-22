class Solution {
private:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    int lcm(int a, int b) {
        return a / gcd(a, b) * b;
    }
public:
    int maxLength(vector<int>& nums) {
        int ans = 1, n = nums.size();

        for (int i = 0; i < n; ++i) {
            unsigned long long prod = nums[i];
            int g = nums[i], l = nums[i];            

            for (int j = i + 1; j < n; ++j) {
                prod *= nums[j];

                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if (prod == 1LL * g * l) {
                    ans = max(ans, j - i + 1);
                }
                else{
                    break;
                }
            }
        }

        return ans;
    }
};