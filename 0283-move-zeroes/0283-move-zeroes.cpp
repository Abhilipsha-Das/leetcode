class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        // Step 1: Pehla zero element dhoondo
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // Agar array me koi zero nahi hai, toh direct return
        if (j == -1) return;

        // Step 2: Non-zero elements ko zero ke saath swap karo
        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};