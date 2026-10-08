class Solution {
public:
 void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Important for k > n cases
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        arr[(i + k) % n] = nums[i]; // Single line handles both inside & wrap-around
    }

    nums = arr; // Original vector me copy back karna padega
}
};