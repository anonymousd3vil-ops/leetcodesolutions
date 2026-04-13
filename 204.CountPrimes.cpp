//submission one

class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = false, isPrime[1] = false;

        for(int i = 0; i<sqrt(n); i++){
            if(isPrime[i]){
                for(int j = i*i; j<n; j+=i){
                    isPrime[j] = false;
                
                }
            }
        }
        
        int counter = 0;

        for(int i = 0; i<n; i++){
            if(isPrime[i]) counter ++;
        }

        return counter;
        //NORMAL METHOD
        
        //for(int i = 2; i<n; i++){
            //bool flag = true;
            //for(int j = 2; j<=sqrt(i); j++){
                //if(i%j==0){
                    //flag = false;
                    //break;
                //}
            //}
            //if(flag) counter++;
        //}
    }
};