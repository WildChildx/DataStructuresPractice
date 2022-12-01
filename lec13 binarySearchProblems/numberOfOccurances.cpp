int firstOccurance(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int m = (e-s)/2;
    int ans = 0;
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

int lastOccurance(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int  m = s + (e-s)/2;
    int ans = 0;
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

int countOccurences(int arr[], int n, int X)
{
	//Write your code here
    int last = lastOccurance(arr,n,X),first = firstOccurance(arr,n,X);
    if(last==0||first==0)
        return 0;
    return ((last - first)+1);
}