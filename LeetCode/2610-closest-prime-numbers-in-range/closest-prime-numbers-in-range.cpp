class Solution {
public:
    const int MAX_SIZE = 1000001;
    vector<bool> isPrime;
    vector<int> prime;
    vector<int> spf;

    void manipulatedSieve(int N) {
        isPrime.assign(N + 1, true);
        spf.assign(N + 1, 0);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i <= N; i++) {
            if (isPrime[i]) {
                prime.push_back(i);
                spf[i] = i;
            }
            for (int j = 0; j < (int)prime.size() && i * prime[j] <= N && prime[j] <= spf[i]; j++) {
                isPrime[i * prime[j]] = false;
                spf[i * prime[j]] = prime[j];
            }
        }
    }

    vector<int> generatePrimes(int a, int b) {
        vector<int> primesInRange;
        for (int p : prime) {
            if (p > b) break;
            if (p >= a) primesInRange.push_back(p);
        }
        return primesInRange;
    }

    vector<int> closestPrimes(int left, int right) {
        if (prime.empty() || prime.back() < right) {
            manipulatedSieve(right);
        }
        vector<int> primes = generatePrimes(left, right);
        if (primes.size() < 2) return {-1, -1}; 

        int minDiff = INT_MAX, p1 = -1, p2 = -1;
        for (size_t i = 1; i < primes.size(); i++) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                p1 = primes[i - 1];
                p2 = primes[i];
            }
        }
        return {p1, p2};
    }
};
