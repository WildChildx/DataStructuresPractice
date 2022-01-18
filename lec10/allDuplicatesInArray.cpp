class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //sort
    sort(nums.begin(),nums.end());
    vector<int>ans;
    int n= nums.size(), x=nums[0];
    for(int i =0;i<n-1;i++){
        //edge case when first two elements are repeated
        if(i==0 and nums[i]==nums[i+1]){
            ans.push_back(nums[i]);
        }
        else if(nums[i]==nums[i+1] and x!=nums[i]){
            ans.push_back(nums[i]);
            x = nums[i];   
        }
    }
        return ans;
    }
};