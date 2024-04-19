class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        auto newEnd = remove(nums.begin(), nums.end(), val);
        nums.erase(newEnd, nums.end());
        
        return nums.size();
    }
};