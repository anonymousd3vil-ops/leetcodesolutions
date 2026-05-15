//submission one
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        vector<char> alph = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};

        for(string word : words){
            int sum = 0;
            for(char c:word){
                sum += weights[c - 'a'];
            }
            
            sum = sum%26;
            
            ans.push_back(alph[sum]);
        }
        return ans;
    }
};

//submission two
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for(string &word : words){
            int sum = 0;
            for(char c:word){
                sum += weights[c - 'a'];
            }
            
            sum = sum%26;
            
            ans.push_back('z'-sum);
        }
        return ans;
    }
};


//submission three
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for(string &word : words){
            int sum = 0;
            for(char c:word){
                sum += weights[c - 'a'];
            }
            
            sum = sum%26;
            
            ans.push_back('z'-sum);
        }
        return ans;
    }
};

//submission four
