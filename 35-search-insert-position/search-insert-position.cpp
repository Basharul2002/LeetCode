class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
{
    int size = nums.size();
    return binarySearch(nums, target, 0, size-1);
}

int binarySearch(vector<int>& nums, int target, int min, int max)
{
    if (min > max) 
        return min;
    

    int mid = min + (max - min) / 2;

    if (nums[mid] == target) 
        return mid;
    
    else if (nums[mid] > target) 
        return binarySearch(nums, target, min, mid - 1);
    
    
    else 
        return binarySearch(nums, target, mid + 1, max);
    
}



};