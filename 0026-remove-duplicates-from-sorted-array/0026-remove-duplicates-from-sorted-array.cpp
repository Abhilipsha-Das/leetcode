class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int index = 1; // Unique elements ki position track karne ke liye

    for (int i = 1; i < nums.size(); i++) {
        // Jab bhi naya/unique element mile
        if (nums[i] != nums[i - 1]) {
            nums[index] = nums[i];
            index++;
        }
    }

    return index; // 'index' hi total unique elements (k) ki count hai
} 
};