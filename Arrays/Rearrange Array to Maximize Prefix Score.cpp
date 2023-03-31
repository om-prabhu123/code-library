class Solution:
    def maxScore(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        maxsum=0
        psum=0;
        for i in nums:
            psum=psum+i
            if psum>0:
                maxsum+=1
            else:
                psum=0
        return maxsum
        
