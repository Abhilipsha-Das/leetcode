class Solution {
public:
  void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Out of bounds se bachne ke liye

        // Step 1: Reverse entire array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};