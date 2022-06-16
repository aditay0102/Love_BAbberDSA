#include <iostream>
using namespace std;

/*
https://www.codingninjas.com/codestudio/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
*/
int binarysearch(int arr[],int start ,int end,int k){
    int s =0;
    int e=end-1;
    while (s<=e)
    {
        int mid=(s+e)/2;

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
    int k;
    cin>>k;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 return binarysearch(arr,0,n-1,k);
  
return 0;    
}