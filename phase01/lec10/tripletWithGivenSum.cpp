vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	sort(arr.begin(),arr.end());
    
    vector<vector<int>> ans;
    
    for(int i=0;i+2<n;i++){
        int left= i+1;      // left pointer
        int right= n-1;     // right pointer
        
        while(left<right){
            int sum= arr[i]+arr[left]+arr[right];
            if(sum==K){
                ans.push_back({arr[i],arr[left],arr[right]});
                int left_element=arr[left];
                int right_element=arr[right];
                while(left<right && arr[left]==left_element)left++;        // skip the duplicate elements
                while(left<right && arr[right]==right_element)right--;     // skip the duplicate elements
            }
            
            else if(sum<K)left++;  // increment the left pointer
            
            else right--;          // decrease the right pointer
            
            while(i+1<n && arr[i]==arr[i+1])i++;  // skip the duplicate elements
            
        }
    }
    return ans;
    
}