class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int size = nums.size();

        long long int targetTotal = (size*(size+1))/2;

        int total = 0;
        for(int num: nums)
            total += num;

        return (int)targetTotal-total;
    }
};