//unique no of occurances
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>numbFreq;
        for(int i =0;i<arr.size();i++)numbFreq[arr[i]]++;
        set<int>st;
        for(auto it:numbFreq)st.insert(it.second);
        return st.size()==numbFreq.size();
        
    }
};