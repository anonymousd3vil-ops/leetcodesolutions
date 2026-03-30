//submission one
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<int> freq;
        int count = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == s[i + 1]) {
                count++;
            } 
            else {
                freq.push_back(count);
                count = 1;
            }
        }

        vector<vector<int>> ans;
        int sum = 0;
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] >= 3) {
                ans.push_back({sum, sum + freq[i] - 1});
            }
            sum += freq[i];
        }

        return ans;
    }
};