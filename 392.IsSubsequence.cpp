//submission one

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ns = s.size(), nt = t.size();

        int ptrt = 0;
        int ptrs = 0;

        while(ptrs < ns && ptrt < nt){
            if(s[ptrs]==t[ptrt]) {
                ptrs++;
            }
            ptrt++;
        }
        return ptrs==ns;
    
    }
};