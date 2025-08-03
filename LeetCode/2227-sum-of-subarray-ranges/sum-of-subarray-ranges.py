LMT = 10**5
INF = 10**9

class Solution:
    def subArrayRanges(self, arr: list[int]) -> int:
        n = len(arr)

        gt = lambda: []
        stk, res = gt(), 0

        # max contribution
        for i in range(n + 1):
            while stk and (i == n or arr[stk[-1]] < (arr[i] if i < n else -INF)):
                j = stk.pop()
                l = stk[-1] if stk else -1
                res += (i - j) * (j - l) * arr[j]
            stk.append(i)

        stk = gt()
        # min contribution
        for i in range(n + 1):
            while stk and (i == n or arr[stk[-1]] > (arr[i] if i < n else INF)):
                j = stk.pop()
                l = stk[-1] if stk else -1
                res -= (i - j) * (j - l) * arr[j]
            stk.append(i)

        return res
