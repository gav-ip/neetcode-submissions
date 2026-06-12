class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, a in enumerate(nums, start=0):
            for j, b in enumerate(nums[i+1:], start=0):
                if a+b==target:
                    return [i, j+i+1]