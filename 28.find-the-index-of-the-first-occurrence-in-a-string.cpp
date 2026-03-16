class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;
        while(j<needle.size() && i<haystack.size()){
            if(haystack[i]==needle[j]){
                if(j==needle.size()-1){
                    return i-needle.size()+1;
                }
                j++;
                i++;
            }
            else{
                i=i-j+1;
                j = 0;
            }
        }
        return -1;
    }
};