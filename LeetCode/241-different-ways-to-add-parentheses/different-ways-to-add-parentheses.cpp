
class Solution {
public:
    vector<int> diffWaysToCompute(const string &expression) {
        vector<int> results;
        for (int i = 0; i < (int)expression.size(); i++) {
            char ch = expression[i];
            if (!isdigit(ch)) {
                vector<int> leftResults = diffWaysToCompute(expression.substr(0, i));
                vector<int> rightResults = diffWaysToCompute(expression.substr(i + 1));
                for (int left : leftResults) {
                    for (int right : rightResults) {
                        results.push_back(applyOperation(left, right, ch));
                    }
                }
            }
        }
        if (results.empty()) {
            results.push_back(stoi(expression));
        }
        return results;
    }
    int applyOperation(int a, int b, char op) {
        if (op == '+') return a + b;
        if (op == '-') return a - b;
        if (op == '*') return a * b;
        return 0;
    }
};
