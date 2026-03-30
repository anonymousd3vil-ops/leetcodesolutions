//submission one
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // vector<int> temp;

        if(nums.size()<k){
            k = k%nums.size();
        }

        int temp[nums.size()];

        int index = 0;

        for(int i = nums.size()-k; i<nums.size(); i++){
            temp[index] = nums[i];
            index++;
        }

        for(int i = 0; i<nums.size()-k; i++){
            temp[index] = nums[i];
            index++;
        }

        for(int i = 0; i<nums.size(); i++){
            nums[i] = temp[i];
        }
    }
};

//submission two
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k = k%n;
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
};