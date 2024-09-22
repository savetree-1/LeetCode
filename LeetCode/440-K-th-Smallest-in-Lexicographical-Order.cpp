/*
By   :-: savetrees
Used :-: Straight Forward Approach
*/
class Solution {
public:
    int findKthNumber(int n, int k) {
        auto countSteps = [&](long curr, int n) {
            long steps = 0;
            long first = curr, last = curr;
            while (first <= n) {
                steps += min(last, (long)n) - first + 1;
                first *= 10;
                last = last * 10 + 9;}
            return steps;};
        int curr = 1;k--;
        while (k > 0) {
            int steps = countSteps(curr, n);
            if (steps <= k) {
                k -= steps;
                curr += 1;
            } else {
                curr *= 10;
                k--;}}
        return curr;}};