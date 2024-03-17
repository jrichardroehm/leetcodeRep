//1480. running-sum-of-1d-array

class Solution {
//Fun problem!
public:
    vector<int> runningSum(vector<int>& nums) {
        int total=0;
        vector<int>::iterator curr;
        for(curr = nums.begin();curr!=nums.end();++curr){
            total+=*curr;
            *curr=total;
        }
        return nums;
        }
};
