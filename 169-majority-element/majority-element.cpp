class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int size = nums.size();
        map<int, int> map;

        for(auto i = 0; i<size; i++)
            map[nums[i]]++;

        size = size* 0.5;

        for(auto x:map)
        {
            if(x.second > size)
                return x.first;
        }

        return 0;
        
    }
};