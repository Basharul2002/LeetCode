class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        unordered_map<int, int> numToIndex;

        // Fill the hash table with values and their indices
        for (int i = 0; i < nums.size(); ++i) {
            numToIndex[nums[i]] = i;
        }

        // Lookup the target value in the hash table
        auto it = numToIndex.find(target);
        if (it != numToIndex.end()) 
            return it->second;  // Return the index if found
         
        else 
            return -1;  // Return -1 if not found
        
    }
};