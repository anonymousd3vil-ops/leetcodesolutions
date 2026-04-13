//submission one

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i = 0; i<matrix.size(); i++){
            int sum = 0;
            for(int j = 0; j<matrix[0].size(); j++){
                sum += matrix[i][j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

//submission two

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        vector<int> ans(n, 0);
        
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = 0; j<n; j++){
                sum += matrix[i][j];
            }
            ans[i] = sum;
        }
        return ans;
    }
};