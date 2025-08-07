#include <vector>
#include <climits>
using namespace std;

bool func(const vector<int>& arr, int start1, int start2, int m)
{
    for(int k = 0; k < m; ++k)
    {
        if (arr[start1 + k] != arr[start2 + k])
            return false;
    }
    return true;
}

class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();
        for(int i = 0; i + m * k <= n; ++i)
        {
            int count = 0;
            while (count < k && func(arr, i, i + count * m, m))
            {
                ++count;
            }
            if (count >= k)
                return true;
        }
        return false;
    }
};
