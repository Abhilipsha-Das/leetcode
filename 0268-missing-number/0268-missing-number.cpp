class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0); // Size n+1 ka vector initialized to 0
        
        // Array ke elements ki presence mark karo
        for (int i = 0; i < n; i++) {
            hash[nums[i]] = 1;
        }
        
        // Jis index par value 0 reh gayi, wahi missing number hai
        for (int i = 0; i <= n; i++) {
            if (hash[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};