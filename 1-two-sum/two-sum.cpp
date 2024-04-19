class Solution 
{
    public:
        vector<int> twoSum(vector<int> &number, int target)
        {
            int size = number.size();
            for(int i=0; i<size-1; i++)
            {
                for(int j = i+1; j<size; j++)
                {
                    if(number[i] + number[j] == target)
                    {
                        return {i, j};
                    }
                }
            }

            return {};
        }
};