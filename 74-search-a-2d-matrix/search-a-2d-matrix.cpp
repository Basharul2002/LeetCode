class Solution {
public:
    int row, col;
    bool binarySearch(vector<vector<int>>& matrix, int target, int left, int right)
    {
        
        if(left>right)
            return false;
        
        int mid = (left+right)*0.5;

        if(matrix[mid/col][mid%col] == target)
            return true;

        else if(matrix[mid/col][mid%col] >target)
            return binarySearch(matrix, target,0, mid-1);
         
        else if(matrix[mid/col][mid%col]<target)
            return binarySearch(matrix, target, mid+1, right);
        
        return false;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        if (matrix.empty() || matrix[0].empty())
            return false;
            
        row = matrix.size();
        col = matrix[0].size();

        int left = 0;
        int right = row*col-1;

        return binarySearch(matrix, target, left, right);
    }


};