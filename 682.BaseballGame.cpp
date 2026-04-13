//submission one

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for(int i = 0; i<operations.size(); i++){
            int n = record.size();
            if(operations[i] == "+") record.push_back(record[n-1] + record[n-2]);
            else if(operations[i] == "D") record.push_back(record[n-1]*2);
            else if(operations[i] == "C") record.pop_back();
            else record.push_back(stoi(operations[i]));
        }

        int sum = 0;
        for(int n : record) sum += n;

        return sum;
    }
};