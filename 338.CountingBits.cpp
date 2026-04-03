//first submission

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        for(int i = 0; i<=n; i++){
            int p = i;
            int count = 0;
            while(p){
                int bit = p&1;
                if(bit) count++;
                p >>= 1;
            }
            bits.push_back(count);
        }
        return bits;
    }
};

