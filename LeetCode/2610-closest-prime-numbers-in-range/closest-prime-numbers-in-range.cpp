/*
By   :: savetrees
Used :: Optimal (Sieve of E. )
*/
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i * i <= right; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> record;
        for(int i = left; i <= right; i++) {
            if(isPrime[i]) record.push_back(i);
        }

        if(record.size() < 2) return {-1, -1};

        int min_diff = INT_MAX, a = -1, b = -1;
        for(int i = 1; i < record.size(); i++) {
            if(record[i] - record[i - 1] < min_diff) {
                a = record[i - 1];
                b = record[i];
                min_diff = record[i] - record[i - 1];
            }
        }
        return {a, b};
    }
};
