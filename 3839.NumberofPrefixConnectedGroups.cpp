//submission one
class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string, int> freq;

        for (string &word : words) {
            if (word.size() >= k) {
                freq[word.substr(0, k)]++;
            }
        }

        int count = 0;
        for(auto it:freq){
            if(it.second>=2) count++;
        }

        return count;
    }
};

//submission two
class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string, int> freq;

        for (string &word : words) {
            if (word.size() >= k) {
                freq[word.substr(0, k)]++;
            }
        }

        int count = 0;
        for(auto &it:freq){
            if(it.second>=2) count++;
        }

        return count;
    }
};