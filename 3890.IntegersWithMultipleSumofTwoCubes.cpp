//first submission

class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int> cubes;
        for(int i = 1; i*i*i<=n; i++){
            for(int j = i; j*j*j + i*i*i <=n; j++){
                int x = j*j*j + i*i*i;
                cubes[x]++;
            }
        }
        vector<int>ans;
        for(auto &it : cubes){
            if(it.second>=2){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};