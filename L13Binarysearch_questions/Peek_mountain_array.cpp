#include <iostream>
using namespace std;
/*
https://leetcode.com/problems/peak-index-in-a-mountain-array/
*/
int peek(int arr[]){
    int s=0;
    int e=6-1;
    int mid  = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
};

int main(){
    int arr[6]={0,1,2,3,2,1};
    cout<<peek(arr);
return 0;
}