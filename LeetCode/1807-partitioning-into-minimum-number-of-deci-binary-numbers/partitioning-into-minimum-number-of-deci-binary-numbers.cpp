class Solution {
public:
    int minPartitions(string n) {
        int m = 0;
        for (char d: n) {
            m = max(m, d - '0');
        }
        return m;
    }
};