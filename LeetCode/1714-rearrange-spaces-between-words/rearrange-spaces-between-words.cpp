class Solution {
public:
    string reorderSpaces(string text) {
        string word;
        stringstream ss(text);
        vector<string> strings;

        while (ss >> word) {
            strings.push_back(word);
        }

        int cnt = count(text.begin(), text.end(), ' ');
        int n = strings.size();

        if (n == 1) {
            return strings[0] + string(cnt, ' ');
        }

        int num = cnt / (n - 1);
        int extra = cnt % (n - 1);

        string numstring = string(num, ' ');
        string extrastring = string(extra, ' ');
        string final = "";

        int c = n - 1;
        for (string s : strings) {
            final += s;
            if (c) {
                final += numstring;
                c--;
            }
        }

        final += extrastring;
        return final;
    }
};
