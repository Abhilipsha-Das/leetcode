class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        
        int index = 0;
        for (int it : st) {
            nums[index] = it;
            index++;
        }
        
        return index;
    }
};