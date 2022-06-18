// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int n, int diff){
    //code
    sort(arr,arr+n);
    int i,j;
    for(int i=n-1;i>=1;i--){
        j=i-1;
        while(j>=0){
            if(arr[i]-arr[j]==diff)
            return true;
            else if(arr[i]-arr[j]<diff)
            j--;
            else
            break;
        }
    }
    return false;
}