//submission one
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum;

        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            prefixSum.push_back(sum + nums[i]);
            sum += nums[i];
        }

        int rightSum = 0;

        for(int i = 0; i < nums.size(); i++){
            rightSum = sum - prefixSum[i];

            if(prefixSum[i] - nums[i] == rightSum){
                return i;
            }
        }

        return -1;
    }
};

//submission two
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;

        for(int n : nums) sum += n;

        int left = 0;

        for(int i = 0; i<nums.size(); i++){
            if(left == sum - left - nums[i]){
                return i;
            }
            left += nums[i];
        }

        return -1;
    }
};

