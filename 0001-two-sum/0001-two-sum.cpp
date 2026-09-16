class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; // Notebook: {value -> index}
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int moreNeeded = target - num;

        // Check karo kya needed number pehle mil chuka hai
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }

        // Nahi mila toh current number ko notebook me daal do
        mpp[num] = i;
    }

    return {};
    }
};