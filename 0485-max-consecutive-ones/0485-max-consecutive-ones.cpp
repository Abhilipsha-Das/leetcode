class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int cnt = 0;
        int maxi = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
                maxi = max(maxi, cnt); // Har 1 par max update karte rahenge
            } else {
                cnt = 0; // 0 aate hi count reset
            }
        }

        return maxi;
    }
};
    
