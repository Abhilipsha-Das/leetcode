class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
    int cnt= 0, max_no_1 =0;
    for(int i = 0 ; i < n ; i++){
        if (nums[i]== 1) cnt = cnt + 1;
         if (nums[i]== 0 || i ==n-1){
            int new_cnt = cnt;
            max_no_1 = max(new_cnt,max_no_1);
            cnt = 0;
         }
    }return max_no_1;
    }
};