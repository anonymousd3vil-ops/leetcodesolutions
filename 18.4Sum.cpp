//first submission time: 83.30%  memory: 53.57

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<n; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = n-1;

                while(k<l){
                    long long total = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if(total>target) l--;
                    else if(total<target) k++;
                    else{
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        //l--;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }

                        while(k<l && nums[l]==nums[l-1]){
                            l--;
                        }
                    }
                }
            }
        }
        return res;
    }
};

//second submission time: 34.71%  memory: 22.54% removed int n = nums.size();
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<nums.size(); j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = nums.size()-1;

                while(k<l){
                    long long total = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if(total>target) l--;
                    else if(total<target) k++;
                    else{
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        //l--;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }

                        while(k<l && nums[l]==nums[l-1]){
                            l--;
                        }
                    }
                }
            }
        }
        return res;
    }
};

//third submissin minimal optimization time: 86.84% memory 98.43%
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<n; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = n-1;

                while(k<l){
                    long long total = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                    if(total>target) l--;
                    else if(total<target) k++;
                    else{
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        // l--;

                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }

                        // while(k<l && nums[l]==nums[l-1]){
                        //     l--;
                        // }
                    }
                }
            }
        }
        return res;
    }
};