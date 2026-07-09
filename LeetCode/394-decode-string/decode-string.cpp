class Solution {
public:
    string decodeString(string s) {
        string current = "";
        int num = 0;

        stack<pair<int, string>> st;

        for(char ch : s) {
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[') {
                st.push({num, current});
                current = "";
                num = 0;
            }
            else if(ch == ']') {
                string prev = st.top().second;
                int repeat = st.top().first;
                st.pop();

                string repeated = "";

                for(int count = 0; count < repeat; count++) {
                    repeated += current;
                }

                current = prev + repeated;
            }
            else {
                current += ch;
            }
        }

        return current;
    }
};