class Solution {
public:
    void moveZeroes(vector<int> &nums)
{
    int n = nums.size();

    vector<int> temp; //create a temporary empty vector

    for (int i = 0; i < n; i++)
    {

        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);    //temp k shuru mai sab non zeroe waalo ko bhara
        }
    }
    int nt = temp.size();   //temp ka size calculate kra

    for (int i = nt; i < n; i++)
    {
        temp.push_back(0);  //nt tow temp ka size h jisme sirf non zero elments h , ab uski size se shuru krke jab ak n ki size nhi pohanch jaate usme 0 daalte raho
    }
    nums = temp;    //end mai temp ko nums k barabar kr diya; void function pe return is not necessary
}

};