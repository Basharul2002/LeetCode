class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> triangle(numRows);

        for (int i = 0; i < numRows; ++i) 
        {
            triangle[i].resize(i + 1);  // Resize the current row

            // First and last elements of each row are always 1
            triangle[i][0] = triangle[i][i] = 1;

            // Calculate the values of the rest of the elements in the row
            for (int j = 1; j < i; ++j) 
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        return triangle;
    }
};