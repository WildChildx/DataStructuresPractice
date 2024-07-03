void sort012(int *arr, int n)
{
   int i = 0,j = n-2,k = n-1;
   while(i>=j){
       if(arr[i]==0)
           i++;
       if(arr[j]==1)
           j--;
       if(arr[k]==2)
           k--;
       if(arr[i]>arr[j]){
           int temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
       if(arr[j]>arr[k]){
           int temp = arr[j];
           arr[j] = arr[k];
           arr[k] = temp;
       }
           
       
   }
    
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}