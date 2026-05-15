//submission one

class Solution {
public:
    int reverseNum(int n){
        int ans = 0;
        while(n){
            int last = n%10;
            ans = ans*10 + last;
            n /= 10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        return abs(n-reverseNum(n));
    }
};

//submission two

class Solution {
public:
    int reverseNum(int n){
        int ans = 0;
        while(n){
            ans = ans*10 + n%10;
            n /= 10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        return abs(n-reverseNum(n));
    }
};

//submission two
class Solution {
public:
    int reverseNum(int n){
        int ans = 0;
        while(n){
            ans = ans*10 + n%10;
            n /= 10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        return abs(n-reverseNum(n));
    }
};
