//first solution

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int n = grid[0].size();
        int m = grid.size();

        for(int i = 0; i<k/2; i++){
            for(int j = 0; j<k; j++){
                swap(grid[x+i][y+j], grid[x+k-i-1][y+j]);
            }
        }
        return grid;
    }
};

//second solution
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        
        for(int i = 0; i<k/2; i++){
            for(int j = 0; j<k; j++){
                int temp = grid[x+i][y+j];
                grid[x+i][y+j] = grid[x+k-i-1][y+j];
                grid[x+k-i-1][y+j] = temp;
                //swap(grid[x+i][y+j], grid[x+k-i-1][y+j]);
            }
        }
        return grid;
    }
};

//third submit
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for(int i = 0; i<k/2; i++){
            for(int j = 0; j<k; j++){
                swap(grid[x+i][y+j], grid[x+k-i-1][y+j]);
            }
        }
        return grid;
    }
};