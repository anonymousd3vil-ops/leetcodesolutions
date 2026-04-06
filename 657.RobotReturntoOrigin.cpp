//submisison 1
class Solution {
public:
    bool judgeCircle(string moves) {
        int xAxis = 0;
        int yAxis = 0;

        for (char c : moves) {
            if (c == 'L')
                xAxis--;
            else if (c == 'R')
                xAxis++;
            else if (c == 'U')
                yAxis++;
            else
                yAxis--;
        }
        if (xAxis == 0 && yAxis == 0)
            return true;
        return false;
    }
};

//submission 2
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

//submission 3
class Solution {
public:
    bool judgeCircle(string moves) {
        return (count(moves.begin(), moves.end(), 'R') - count(moves.begin(), moves.end(), 'L'))==0 && (count(moves.begin(), moves.end(), 'U') - count(moves.begin(), moves.end(), 'D'))==0;
    }
};