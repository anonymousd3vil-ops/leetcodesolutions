//submission one
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans = INT_MAX;
        
        for(int i = 0; i<n; i++){
            if(words[i] == target){
                
                int front = (i - startIndex + n)%n;
                int back = (startIndex - i + n)%n;
            
                ans = min(ans, min(front, back));
                
            }
            
        }
        
        return ans == INT_MAX ? -1:ans;
    }
};