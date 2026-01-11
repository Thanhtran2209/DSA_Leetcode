import sys
import os
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '../../')))

class Solution(object):
    def twoSumn(self,nums, target):
        

        num_map = {} # create map to store number and its index
        for i, num in enumerate(nums): # iterate through the list
            complement = target - num # find the complement
            if complement in num_map:   # check if complement exists in the map
                return [num_map[complement], i]     
            num_map[num] = i
            

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        num_map = {} # create map to store number and its index
        for i, num in enumerate(nums): # iterate through the list
            complement = target - num # find the complement
            if complement in num_map:   # check if complement exists in the map
                return [num_map[complement], i]     
            num_map[num] = i
        return []
    
# Example usage:        



if __name__ == "__main__":
    solution = Solution()
    nums = [2, 7, 11, 15]
    target = 9
    result = solution.twoSum(nums, target)
    print("Indices of the two numbers that add up to the target:", result)  # Output: [0, 1]



