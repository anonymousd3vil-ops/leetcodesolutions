//submission one

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i = 0; i<queries.size(); i++){
            int idx = queries[i][0];
            while(idx <= queries[i][1]){
                long long l = 1LL*nums[idx] * queries[i][3];
                nums[idx] = (l) % (1000000007);
                    idx += queries[i][2];
            }
        }

        int xo = 0;
        for(int i = 0; i<nums.size(); i++){
            xo ^= nums[i];
        }

        return xo;
    }
};