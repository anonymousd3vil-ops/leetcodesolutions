//First Submission

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int n:nums){
            freq[n]++;
        }

        for(auto i:freq){
            if(i.second>2) return false;
        }
        return true;
    }
};

//Second Submission

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i<nums.size()-1; i++){
            if(nums[i]==nums[i-1] && nums[i]==nums[i+1]) return false;
        }
        return true;
    }
};