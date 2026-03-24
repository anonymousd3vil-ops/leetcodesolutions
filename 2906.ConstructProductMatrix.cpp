//my first logic came in my mind (BTW it is wrong solutuion)
class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> p(n, vector<int>(m, 0));
        int k = 0;
        while(k<n*m){
            int row = k/m;
            int col = k%m;
            int prod = 1;
            for(int i = 0; i<n; i++){
                for(int j = 0; j<m; j++){
                    prod = prod%12345;
                    if(row==i && col == j) continue;
                    prod *= grid[i][j];
                }
            }
            p[row][col] = prod;
            k++;
        }
        return p;
    }
};

//actual correct answer
class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int size = n*m;

        vector<int> flat;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                flat.push_back(grid[i][j]);
            }
        }

        vector<long long> prifix(size, 1), suffix(size, 1);

        for(int i = 1; i<size; i++){
            prifix[i] =  (prifix[i-1]*flat[i-1])%12345;
        }

        for(int i = size-2; i>=0; i--){
            suffix[i] =  (suffix[i+1]*flat[i+1])%12345;
        }

        vector<vector<int>> p(n, vector<int>(m));
        for(int i = 0; i<size; i++){
            int val = (prifix[i]*suffix[i])%12345;
            p[i/m][i%m] = val;
        }
        return p;
    }
};