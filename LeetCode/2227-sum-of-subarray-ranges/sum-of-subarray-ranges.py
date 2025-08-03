class Solution:
    def subArrayRanges(self, nums: List[int]) -> int:
        def sumRange(idx: int, minVal: int, maxVal: int) -> int:
            total = maxVal - minVal

            if(idx >= len(nums)):
                return total

            minVal = nums[idx] if nums[idx] < minVal else minVal
            maxVal = nums[idx] if nums[idx] > maxVal else maxVal
            total += sumRange(idx+1, minVal, maxVal)

            return total

        ans = 0
        for idx, num in enumerate(nums):
            if (idx > 0 and nums[idx] == nums[idx-1]):
                continue
            ans += sumRange(idx, num, num)

        return ans