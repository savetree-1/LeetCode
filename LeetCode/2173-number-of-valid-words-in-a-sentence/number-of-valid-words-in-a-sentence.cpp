#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool chk(string tok) {
        int hyp = 0, pun = 0;
        int len = tok.size();

        for (int idx = 0; idx < len; idx++) {
            char ch = tok[idx];

            if (isdigit(ch)) return false;

            if (ch == '-') {
                hyp++;
                if (hyp > 1) return false;
                if (idx == 0 || idx == len - 1) return false;
                if (!islower(tok[idx - 1]) || !islower(tok[idx + 1]))
                    return false;
            }

            if (ch == '!' || ch == '.' || ch == ',') {
                pun++;
                if (pun > 1) return false;
                if (idx != len - 1) return false;
            }

            if (!islower(ch) && ch != '-' && ch != '!' && ch != '.' && ch != ',')
                return false;
        }
        return true;
    }

    int countValidWords(string sentence) {
        stringstream ss(sentence);
        string tok;
        int cnt = 0;

        while (ss >> tok) {
            if (chk(tok)) cnt++;
        }
        return cnt;
    }
};
