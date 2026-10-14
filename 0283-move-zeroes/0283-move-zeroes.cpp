class Solution {
public:
    void moveZeroes(vector<int> &nums)
{
    int n = nums.size(), j = -1;//to handle edge case- agr ek bhi 0 nhi ho tow

    for (int i = 0; i < n; i++)
    {

        if (nums[i] == 0)
        {
          j = i;
          break;
        }
    }
    if (j == -1) return;//yhi pr code khatam ho legi

    for (int i = j+1; i <n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i],nums[j]);
          j = j+1;
         
        }
    }
}
};