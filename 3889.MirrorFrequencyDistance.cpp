//first submission
class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char, int> freq;
        for(char c:s){
            freq[c]++;
        }

        unordered_set<char> visit;
        int ans = 0;

        for(auto &it:freq){
            char c = it.first;
            char mirror;

            if(visit.count(c)) continue;

            if(isalpha(c)){
                mirror='z'-(c-'a');
            }
            else{
                mirror='9'-(c-'0');
            }

            int f1 = freq[c];
            int f2;
            if(freq.count(mirror)) f2 = freq[mirror];
            else f2 = 0;
            

            ans += abs(f1-f2);
            visit.insert(c);
            visit.insert(mirror);
        }
        return ans;
    }
};