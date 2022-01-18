class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i = 0;i<nums.size();i++)mpp[nums[i]]++;
        vector<int>ans;
        for(auto p:mpp){
            if(p.second>1)
                ans.push_back(p.first);
        }
        
        return ans;
    }
};