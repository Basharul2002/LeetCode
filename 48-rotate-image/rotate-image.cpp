class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();

        if(n == 1) return;

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<i; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for(auto& r: matrix)
            reverse(r.begin(), r.end());
    }
};