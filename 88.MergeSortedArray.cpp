class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left1 = 0, right1 = m-1;
        int left2 = 0, right2 = n-1;
        
        vector<int> temp;

        while(left1<=right1 && left2<=right2){
            if(nums1[left1]<=nums2[left2]){
                temp.push_back(nums1[left1]);
                left1++;
            }
            else{
                temp.push_back(nums2[left2]);
                left2++;
            }
        }

        while(left1<=right1){
            temp.push_back(nums1[left1]);
            left1++;
        }

        while(left2<=right2){
            temp.push_back(nums2[left2]);
            left2++;
        }

        for(int i = 0; i<temp.size(); i++){
            nums1[i] = temp[i];
        }
    }
};