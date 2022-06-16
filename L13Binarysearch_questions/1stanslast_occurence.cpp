#include <iostream>
using namespace std;

/*---https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
*/

int firstocc(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid=s+(e-s)/2;
    int ans = -1;
    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
         mid=s+(e-s)/2;
    }

    return ans;
};
int lastocc(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid=s+(e-s)/2;
    int ans = -1;
    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            s = mid +1;
        }
        else if(key>arr[mid]){
            s= mid+1;
        }
        else if(key<arr[mid]){
            e = mid-1;
        }
         mid=s+(e-s)/2;
    }

    return ans;
};



int main(){
    int n =8;
    int key=3;
    int arr[n]={1,2,3,3,3,3,3,3,4};

    cout<<firstocc(arr,n,key);
    cout<<lastocc(arr,n,key);
//--------for finding total no of occurence=------------------
    cout<<"totol no of occurence"<<(lastocc(arr,n,key)-firstocc(arr,n,key)+1);
    

return 0;
}