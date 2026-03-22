//first submission

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int oddnums=0;
        int minOdd = INT_MAX;
    

        for(int x : nums1){
            if(x%2==1){
                oddnums++;
                minOdd = min(minOdd, x);
            }

        }

        if(oddnums==0) return true;
        if(oddnums==nums1.size()) return true;
        for(int x : nums1){
            if(x%2==0 && minOdd>=x) return false;
        }

        return true;
    }
};