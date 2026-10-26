class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        vector<int> temp;
        temp.push_back(nums[0]);
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                temp.push_back(nums[i]);
            }
        }
        
        int k = temp.size();
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
        
        return k;
    }
};