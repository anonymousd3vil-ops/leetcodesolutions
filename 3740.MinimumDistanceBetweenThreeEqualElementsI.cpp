//submission one

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> pos;

        for(int i = 0; i < nums.size(); i++){
            pos[nums[i]].push_back(i);
        }

        int ans = INT_MAX;

        for(auto &it : pos){
            vector<int> &v = it.second;

            if(v.size() >= 3){
                for(int i = 0; i < v.size()-2; i++){
                    int dist = 2 * (v[i+2] - v[i]);
                    ans = min(ans, dist);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};