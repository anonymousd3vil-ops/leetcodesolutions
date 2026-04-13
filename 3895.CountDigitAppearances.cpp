//submission one

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int n : nums){
            while(n!=0){
                int last = n%10;
                if(last == digit){
                    count++;
                }
                n /= 10;
            }
        }
        return count;
    }
};