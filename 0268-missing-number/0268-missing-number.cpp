class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // 0 se n tak har number ke liye check karenge
        for (int i = 0; i <= n; i++) {
            bool found = false;
            
            // Array me search karenge ki i present hai ya nahi
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            
            // Agar number array me nahi mila, toh wahi missing hai
            if (!found) {
                return i;
            }
        }
        return -1;
    }
};