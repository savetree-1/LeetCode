class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        vector<int> sum = {0,31,28,31,30,31,30,31,31,30,31,30};
        for (int i = 1; i < 12; i++) {
            sum[i] += sum[i - 1];
        }
        int a1 = sum[stoi(arriveAlice.substr(0, 2)) - 1]
                 + stoi(arriveAlice.substr(3, 2));
        int a2 = sum[stoi(leaveAlice.substr(0, 2)) - 1]
                 + stoi(leaveAlice.substr(3, 2));
        int b1 = sum[stoi(arriveBob.substr(0, 2)) - 1]
                 + stoi(arriveBob.substr(3, 2));
        int b2 = sum[stoi(leaveBob.substr(0, 2)) - 1]
                 + stoi(leaveBob.substr(3, 2));
        int start = max(a1, b1);
        int end   = min(a2, b2);
        if (start > end) return 0;
        return end - start + 1;
    }
};
