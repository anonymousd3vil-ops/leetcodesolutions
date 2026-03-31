//1
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        int count = 0;
        while(n){
            if(n&1){
                count++;
                if(count>1){
                    return false;
                }
            }
            n = n>>1;
        }
        return true;
    }
};

//2

class Solution {
public:
    bool power(long long k, int n){
        if(k == n) return true;
        if(k>n) return false;

        return power(k*2, n);
    }
    bool isPowerOfTwo(int n) {
        return power(1, n);
    }
};

//3
class Solution {
public:
    bool power(long long k, int n){
        if(k == n) return true;
        if(k>n) return false;

        return power(k*2, n);
    }

    bool isPowerOfTwo(int n) {
        //if(n<=0) return false;
        return power(1, n);
    }
};

//4

class Solution {
public:
    bool power(long long k, int n){
        if(k == n) return true;
        if(k>n) return false;

        return power(k*2, n);
    }

    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return power(1, n);
    }
};

//5

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (n&(n-1)) == 0;
    }
};

//6
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        while(n%2==0){
            n /= 2;
        }

        return n==1;
    }
};

//7

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n<= 0 || n%2 != 0) return false;

        return isPowerOfTwo(n/2);
    }
};

//8
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && 2147483648 % n == 0;
    }
};
