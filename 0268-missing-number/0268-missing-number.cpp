class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // Total expected sum from 0 to n
        int totalSum = (n * (n + 1)) / 2;
        
        int actualSum = 0;
        for (int i = 0; i < n; i++) {
            actualSum += nums[i];
        }
        
        // Difference hi missing number hoga
        return totalSum - actualSum;
    }
};