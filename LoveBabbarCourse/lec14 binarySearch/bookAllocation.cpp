bool isPossible(vector<int> arr, int n, int m,int mid){
    int studentCount = 1,pageSum = 0;
    for(int i = 0;i<n;i++){
        if(pageSum + arr[i]<=mid){
           pageSum += arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
        	pageSum = arr[i];
        }
    }
    return true;
}


int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int s = arr[0];
    int ans = -1;
    int e = 0;
    for(int i = 0 ;i<n;i++)
        e += arr[i];
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }else{
            //no solution exists
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return ans;
}