//submission one (not optimal)
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> a;
        for(int x : nums){
            a[x]++;
        }
        vector<int> b;

        for(auto x : a){
            if(x.second == 1) b.push_back(x.first);
        }
        return b;
    }
};