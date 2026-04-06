//first sumbission
class Solution {
public:
    bool judgeCircle(string moves) {
        int xAxis = count(moves.begin(), moves.end(), 'R') - count(moves.begin(), moves.end(), 'L');
        int yAxis = count(moves.begin(), moves.end(), 'U') - count(moves.begin(), moves.end(), 'D');

        
        if (xAxis == 0 && yAxis == 0)
            return true;
        return false;
    }
};