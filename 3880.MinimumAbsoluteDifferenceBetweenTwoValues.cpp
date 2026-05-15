//submission one
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        
        int last1 = -1, last2 = -1;
        int ans = INT_MAX;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                last1 = i;
                if(last2 != -1){
                    ans = min(ans, abs(last2-last1));
                }
            }
            else if(nums[i]==2){
                last2 = i;
                if(last1 != -1){
                    ans = min(ans, abs(last2-last1));
                }
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};


//submission 2

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int last1 = -1, last2 = -1;
        int ans = INT_MAX;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                last1 = i;
                if(last2 != -1){
                    ans = min(ans, abs(last1 - last2));
                }
            }
            else if(nums[i] == 2){
                last2 = i;
                if(last1 != -1){
                    ans = min(ans, abs(last1 - last2));
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};