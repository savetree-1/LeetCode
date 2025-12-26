class Solution {
public:
    int bestClosingTime(string cust) {
        int pen = 0;
        for (char c : cust)
            if (c == 'Y') pen++;
        int minPen = pen;
        int ans = 0;
        for (int i = 0; i < cust.size(); i++) {
            if (cust[i] == 'Y') pen--;
            else pen++;
            if (pen < minPen) {
                minPen = pen;
                ans = i + 1;
            }
        }
        return ans;
    }
};
