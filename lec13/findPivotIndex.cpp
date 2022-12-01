class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0,leftSum = 0;
        for(int x:nums) sum+=x;
        for(int i = 0;i<nums.size();i++){
            if(leftSum == sum - nums[i] - leftSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};