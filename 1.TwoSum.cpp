//submission 3
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i = 0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(map.find(diff)!=map.end()){
                return {map[diff], i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};

//submission 4
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairIdx;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (pairIdx.find(target - num) != pairIdx.end()) {
                return {i, pairIdx[target - num]};
            }
            pairIdx[num] = i;
        }

        return {};        
    }
};