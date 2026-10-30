//Problem

      /*You are given an integer array nums.
      
      Return an integer denoting the first even integer (earliest by array index) that appears exactly once in nums. If no such integer exists, return -1.
      
      An integer x is considered even if it is divisible by 2.
      
       
      
      Example 1:
      
      Input: nums = [3,4,2,5,4,6]
      
      Output: 2
      
      Explanation:
      
      Both 2 and 6 are even and they appear exactly once. Since 2 occurs first in the array, the answer is 2.
      
      Example 2:
      
      Input: nums = [4,4]
      
      Output: -1
      
      Explanation:
      
      No even integer appears exactly once, so return -1.
      
       
      
      Constraints:
      
      1 <= nums.length <= 100
      1 <= nums[i] <= 100
        */

//Solution

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; ++i){
            if (nums[i] % 2 != 0) continue; 
            
            int flag = 1; 
            for(int j = 0; j < n; ++j){
                if(i != j){
                    if(nums[i] == nums[j]){
                        flag = 0; 
                        break;   
                    }
                }
            }
            if(flag){
                return nums[i]; 
            }
        }
        return -1; 
    }
};
