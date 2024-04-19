class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while(left<right)
        {
            int current = min(height[left], height[right])*(right-left);
            maxArea = max(current, maxArea);

            if(height[left]<height[right])
                left++;
            
            else 
                right--;
        }

        return maxArea;
    }
};