//first subkission

class Solution {
public:
    char findTheDifference(string s, string t) {
        int rem = 0;
        for(char c : s){
            rem ^= (int)c;
        }

        for(char c:t){
            rem ^= (int)c;
        }

        return (char)rem;
    }
};

//second submission
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> freq;
    
        for(char c : s){
            freq[c]++;
        }

        for(char c:t){
            freq[c]--;
        }

        for(auto &it : freq){
            if(it.second != 0) return it.first;
        }

        return ' ';

        
    }
};
