class Solution {
public:
  int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0; // agr koi element h hi nhi tow kyu dimaag kharab kare 0 return krdo

    vector<int> temp;

    temp.push_back(nums[0]); // pehle waala element unique hi hoti h

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] != nums[i])// peeche k elements se compare kr rhe h
        {                            
            temp.push_back(nums[i]); // i ko (shuru k unique elements ko bhar rhe h temporary mai)
        }
    }

    // ttemp mai saare unique elements h

    int k = temp.size(); // number of unique elements

    for (int i = 0; i < k; i++)// original vector k shuru mai hum unique elementa daaal rhe h
    { 
        nums[i] = temp[i];
    }

    return k; // returning no of unique elements
}

};