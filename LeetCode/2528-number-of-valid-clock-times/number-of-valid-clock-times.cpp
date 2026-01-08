class Solution {
public:
    int countTime(string time) {
        int x = 1, y = 1;
        if (time[0] == '?' && time[1] == '?') {
            x = 24;
        } else if (time[0] == '?') {
            x = (time[1] <= '3') ? 3 : 2;
        } else if (time[1] == '?') {
            x = (time[0] == '2') ? 4 : 10;
        }
        if (time[3] == '?' && time[4] == '?') {
            y = 60;
        } else if (time[3] == '?') {
            y = 6;
        } else if (time[4] == '?') {
            y = 10;
        }
        return x * y;
    }
};
