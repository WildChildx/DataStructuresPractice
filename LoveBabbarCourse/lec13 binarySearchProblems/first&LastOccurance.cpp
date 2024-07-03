int firstOccurance(vector<int>& arr,int n,int k){
    int s = 0;
    int e = n-1;
    int m = (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[m]==k){
            ans = m;
            e = m - 1;
        }
        else if(k>arr[m]){
            s = m + 1;
        }else{
            e = m - 1; 
        }
         m = s + (e-s)/2;
    }
    return ans;
}

int lastOccurance(vector<int>& arr,int n,int k){
    int s = 0;
    int e = n-1;
    int  m = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[m]==k){
            ans = m;
            s = m + 1;
        }
        else if(k>arr[m]){
            s = m + 1;
        }else{
            e = m - 1; 
        }
         m = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int>p;
    p.first = firstOccurance(arr,n,k);
  	p.second = lastOccurance(arr,n,k);
    
    return p;
    
}