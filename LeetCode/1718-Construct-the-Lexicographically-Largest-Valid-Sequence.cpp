class Solution {
public:
    bool fun(vector<int>& v, unordered_set<int>& st, int index, int n) {
        while (index < v.size() && v[index] != 0) {
            index++;
        }
        if (index == v.size()) {
            return true;
        }
        for (int i = n; i >= 1; i--) {
            if (st.find(i) == st.end()) {
                if (i == 1) {
                    v[index] = 1;
                    st.insert(1);
                    if (fun(v, st, index + 1, n)) {
                        return true;
                    }
                    v[index] = 0;
                    st.erase(1);
                } else if (index + i < v.size() && v[index] == 0 && v[index + i] == 0) {
                    v[index] = i;
                    v[index + i] = i;
                    st.insert(i);
                    if (fun(v, st, index + 1, n)) {
                        return true;
                    }
                    v[index] = 0;
                    v[index + i] = 0;
                    st.erase(i);
                }
            }
        }
        return false;
    }

    vector<int> constructDistancedSequence(int n) {
        vector<int> v(2 * (n - 1) + 1, 0);
        unordered_set<int> st;
        fun(v, st, 0, n);
        return v;
    }
};