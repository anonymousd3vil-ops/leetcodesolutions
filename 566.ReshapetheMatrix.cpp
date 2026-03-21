class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (mat.size() * mat[0].size() != r * c)
            return mat;
        vector<vector<int>> ans(r, vector<int>(c, 0));

        int i = 0, j = 0;
        while (i < r * c) {
            int row = i / mat[0].size();
            int col = i % mat[0].size();

            int row1 = j / c;
            int col1 = j % c;

            ans[row1][col1] = mat[row][col];
            i++;
            j++;
        }
        return ans;
    }
};