class Fancy {
private:
    vector<pair<int,int>> operationStack;
    vector<pair<int,int>> values;
    unordered_map<int,int> cache;
public:
    Fancy() {
        // 0 for add, 1 for multiplication
        operationStack = {};
        values = {};
    }
    
    void append(int val) {
        values.push_back({val, operationStack.size()});
    }
    
    void addAll(int inc) {
        operationStack.push_back({0, inc});
        cache.clear();
    }
    
    void multAll(int m) {
        operationStack.push_back({1, m});
        cache.clear();
    }
    
    int getIndex(int idx) {
        if(idx < 0 || idx >= values.size())
            return -1;

        if(cache.contains(idx))
            return cache[idx];

        long long value = values[idx].first;

        for (int i=values[idx].second; i<operationStack.size(); ++i) {
            const auto& op = operationStack[i];
            if(op.first == 0) {
                value += op.second;
            } else {
                value *= op.second;
            }
            value %= 1000000007;
        }

        cache[idx] = (int)value;
        return (int)value;
    }
};