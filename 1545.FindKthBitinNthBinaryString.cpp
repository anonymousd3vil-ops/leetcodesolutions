//submission one

class Solution {
public:
    string invert(string str) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1')
                str[i] = '0';
            else
                str[i] = '1';
        }
        return str;
    }
    string reverseString(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }

    char findKthBit(int n, int k) {
        string start = "0";

        for (int i = 2; i <= n; i++) {
            string startInvert = invert(start);
            start = start + "1" + reverseString(startInvert);
        }
        cout << start;
        return start[k - 1];
    }
};


//submission 2
class Solution {
public:
    string invert(string str) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '1')
                str[i] = '0';
            else
                str[i] = '1';
        }
        return str;
    }
    
    string formation(int n){
        if(n==1) return "0";

        string prev = formation(n-1);
        string inv = invert(prev);
        reverse(inv.begin(), inv.end());

        return prev + "1" + inv;
    }
    char findKthBit(int n, int k) {
        string str = formation(n);
        return str[k-1];
    }
};