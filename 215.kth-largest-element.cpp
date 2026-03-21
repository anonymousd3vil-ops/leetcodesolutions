
//this works but not acceptable

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};

//time limit exceeded
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int kMax = -1;
        while(k!=0){
            int max = INT_MIN;
            int index = 0;
            

            for(int i = 0; i<nums.size(); i++){
                if(nums[i]>=max) {
                    max = nums[i];
                    index = i;
                }
            }
            kMax = max;
            nums.erase(nums.begin()+index);
            k--;
        }
        return kMax;
    }
};