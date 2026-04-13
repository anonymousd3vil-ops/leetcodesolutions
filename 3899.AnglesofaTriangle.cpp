//submission one

class Solution {
public:

    bool isTriangle(int a, int b, int c){
        return (a + b > c && b + c > a && c + a > b);
    }
    
    double angle(int a, int b, int c){
        return acos((a*a + b*b - c*c) / (2.0 * a * b));
    }
    
    vector<double> internalAngles(vector<int>& sides) {
        const double pi = 3.14159265358979323846;
        const double fact = 180.0 / pi;
        
        int a = sides[0], b = sides[1], c = sides[2];
        
        if(!isTriangle(a,b,c)) return {};
        
        double A = angle(a,b,c);
        double B = angle(b,c,a);
        double C = angle(c,a,b);
        
        vector<double> ans = {A * fact, B * fact, C * fact};
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};