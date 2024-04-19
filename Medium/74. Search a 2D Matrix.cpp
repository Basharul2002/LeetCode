/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104

*/


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
