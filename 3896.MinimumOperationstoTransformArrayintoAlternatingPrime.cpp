//submisison one

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int closestPrime(int n){
        if (n <= 2) return 2;

        if (n % 2 == 0) n++;

        while (!isPrime(n)) {
            n += 2;
        }

        return n;
    }

    int minOperations(vector<int>& nums) {
        int operations = 0; // 1 2
        for(int i = 0; i<nums.size(); i++){
            if(i%2==0){
                if(isPrime(nums[i])) continue;
                else{
                    int n = closestPrime(nums[i]);
                    operations += n-nums[i];
                }
            }
            else{
                if(!isPrime(nums[i])) continue;
                else{
                    if(nums[i]==2) operations+=2;
                    else operations++;
                }
            }
        }
        return operations;
    }
};