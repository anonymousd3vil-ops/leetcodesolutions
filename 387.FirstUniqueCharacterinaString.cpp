//first submit
class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> character;

        for(auto c : s){
            character[c]++;
        }
        
        for(int i = 0; i < s.size(); i++){
            if(character[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};