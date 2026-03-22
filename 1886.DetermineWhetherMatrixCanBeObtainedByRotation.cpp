//first submission

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = target.size();
        int i = 0;
        bool check = false;
        while(i<4){
            for(int i = 0; i<n; i++){
                for(int j = i+1; j<n; j++){
                    swap(target[i][j], target[j][i]);
                }
            }
            for(int i = 0; i < n; i++){
            reverse(target[i].begin(), target[i].end());
            }
            if(target == mat) check = true;
            i++;
        }
        return check;
    }
};

//second submission
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = target.size();
        int i = 0;
        
        while(i<4){
            for(int i = 0; i<n; i++){
                for(int j = i+1; j<n; j++){
                    swap(mat[i][j], mat[j][i]);
                }
            }
            for(int i = 0; i < n; i++){
            reverse(mat[i].begin(), mat[i].end());
            }
            if(target == mat) return true;
            i++;
        }
        return false;
    }
};