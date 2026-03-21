//first submit
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i = 0; i<ransomNote.size();i++){
            bool check = false;
            for(int j = 0; j<magazine.size(); j++){
                if(ransomNote[i]==magazine[j]){
                    check = true;
                    magazine.erase(magazine.begin()+j);
                    break;
                }
            }
            if(!check) return false;
        }
        return true;
    }
};

//second submit
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);
        for(int i = 0; i<magazine.size(); i++){
            freq[magazine[i] - 'a']++;
        }

        for(int i = 0; i<ransomNote.size();i++){
            if(freq[ransomNote[i]-'a']==0) return false;

            freq[ransomNote[i]-'a']--;
        }
        return true;
    }
};

//third submit
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);
        for (char c : magazine) {
            freq[c - 'a']++;
        }

        for (char c : ransomNote) {
            if (freq[c - 'a'] == 0)
                return false;

            freq[c - 'a']--;
        }
        return true;
    }
};