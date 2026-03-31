//1
class Solution {
public:

    bool power(long long k, int n){
        if(k == n) return true;
        if(k>n) return false;

        return power(k*3, n);
    }
    
    bool isPowerOfThree(int n) {
        return power(1, n);
    }
};

//2
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n%3==0){
            n /= 3;
        }

        return n==1;
    }
};

//3
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n<= 0 || n%3 != 0) return false;

        return isPowerOfThree(n/3);
    }
};

//4
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 && 1162261467 % n == 0;
    }
};