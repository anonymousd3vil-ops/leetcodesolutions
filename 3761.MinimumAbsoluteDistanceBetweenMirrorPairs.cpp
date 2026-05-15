//submission one

class Solution {
public:
    int reverseNum(int n){
        int ans = 0;
        while(n){
            int last = n % 10;
            ans = ans * 10 + last;
            n /= 10;
        }
        return ans;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int ans = INT_MAX;

        for(int i = 0; i < n; i++){

            if(mp.count(nums[i])){
                ans = min(ans, i - mp[nums[i]]);
            }
            int rev = reverseNum(nums[i]);
            mp[rev] = i;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};

//submission two
class Solution {
public:
    int reverseNum(int n){
        int ans = 0;
        while(n){
            int last = n % 10;
            ans = ans * 10 + last;
            n /= 10;
        }
        return ans;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int ans = INT_MAX;

        for(int i = 0; i < n; i++){

            if(mp.count(nums[i])){
                ans = min(ans, i - mp[nums[i]]);
            }
            int rev = reverseNum(nums[i]);
            mp[rev] = i;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};