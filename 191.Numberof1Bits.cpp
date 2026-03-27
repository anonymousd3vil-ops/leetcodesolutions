//first submission
class Solution {
public:
    int hammingWeight(int n) {
        int coun = 0;
        while (n) {
            int lastBit = n & 1;
            if (lastBit) {
                coun++;
            }
            n >>= 1;
        }
        return coun;
    }
};

//seocond sumbission optimal 
class Solution {
public:
    int hammingWeight(int n) {
        int coun = 0;
        while (n) {
            n = n&(n-1);
            coun++;
        }
        return coun;
    }
};