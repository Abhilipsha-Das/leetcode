class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
    set<int> st;

    // Step 1: Saare elements ko set me daal do (duplicates automatically hat jayenge)
    for (int i = 0; i < nums.size(); i++) {
        st.insert(nums[i]);
    }

    // Step 2: Set se elements wapas nums array me copy kar do
    int index = 0;
    for (int it : st) {
        nums[index] = it;
        index++;
    }

    // Step 3: Unique elements ki count return kar do
    return index;
}
    
};