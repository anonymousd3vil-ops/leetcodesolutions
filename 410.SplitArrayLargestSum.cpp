//Complete Code (Local)
#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

bool isPossibleSplit(vector<int>& arr, int n, int solution){
    int pageSum = 0;
    int c = 1;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i]>solution) return false;

        if(pageSum + arr[i] > solution){
            c++;
            pageSum = arr[i];
            if(c>n) return false;
        }
        else{
            pageSum += arr[i];
        }
    }
    return true;
}

int splitArray(vector<int>& nums, int k){
    if(nums.size()<k) return -1;

    int beg = 0;
    int end = accumulate(nums.begin(), nums.end(), 0);
    int ans = -1;

    while(beg <= end){
        int mid = beg + (end-beg)/2;
        
        if(isPossibleSplit(nums, k, mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            beg = mid+1;
        }
    }
    return ans;
    
}

int main(){
    vector<int> pages = {12, 34, 67, 90};
    int k = 2;

    int minPages = splitArray(pages, k);

    cout<<minPages<<endl;
}


//Submission1 (Leetcode)
class Solution {
public:
    bool isPossibleSplit(vector<int>& arr, int n, int solution) {
        int sum = 0;
        int c = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > solution)
                return false;

            if (sum + arr[i] > solution) {
                c++;
                sum = arr[i];
                if (c > n)
                    return false;
            } else {
                sum += arr[i];
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        if (nums.size() < k)
            return -1;

        int beg = 0;
        int end = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;

        while (beg <= end) {
            int mid = beg + (end - beg) / 2;

            if (isPossibleSplit(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } 
            else {
                beg = mid + 1;
            }
        }
        return ans;
    }
};