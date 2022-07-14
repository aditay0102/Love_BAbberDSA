#include <iostream>
using namespace std;

int binarysearch(int arr[],int n , int k){
    int s =0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+(e-s)/2);

        if(arr[mid]==k){
            return mid;
        }
        else if (arr[mid]>k)
        {
            e = mid-1; 
        }
        else{
            s=mid+1;
        }
         
    }
return -1;    
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    cout<<binarysearch(arr,n,k)<<endl;
return 0;    
}