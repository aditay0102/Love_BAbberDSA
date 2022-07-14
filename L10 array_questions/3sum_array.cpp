/*-------------        3Sum from array------------
code studio
https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1
*/

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector <vector<int> > ans;
     
    for(int i = 0;i<n;i++){
    int left =i+1;
    int right  = n-1;
    
        while(left<right){
            if(arr[i]+arr[left]+arr[right]<K){
                i++;
            }
            else if(arr[i]+arr[left]+arr[right]>K){
                right--;
                
            }
            else if(arr[i]+arr[left]+arr[right]==K){
                vector<int>temp;
                temp.push_back(arr[right]);
                temp.push_back(arr[left]);
                temp.push_back(arr[i]);
                ans.push_back(temp);
                
            }
        }
    }
    
        

return ans;
}        