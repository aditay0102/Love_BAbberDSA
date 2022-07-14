/*-===========-------              Sort 0 1 2 -----------
                                                code studi0
https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3ZYVTlqb0d1dWxpLTNVMWpoVHZMNlhhYVdSUXxBQ3Jtc0tsaUROZmtWXzN1U19ycmdhcEEzdzc1QzBfQlJ5TmhCbU0xemF6ZjcyeFItVVJ2RGVmN0NkekdTMWFsbElkaUFTZlIxSjdJUTdKZGI5TlNfbVRDcTRHX1RhSWdBSndkMHJSTVRQQjMwcmkwV20yemQ4QQ&q=https%3A%2F%2Fbit.ly%2F3DfQW0s&v=oVa8DfUDKTw
*/



#include <iostream>
#include <deque>
using namespace std;

void showdq(deque<int> g){
    deque<int>::iterator it;
    for(auto it=g.begin();it !=g.end(); ++it){
        cout<<" "<<*it;
       
    }
}

int main(){
    deque<int> a;
    int arr[9]={2,2,2,1,1,1,0,0,0};
    for(int i =0;i<9;i++){
        if(arr[i]==0){
            a.push_front(arr[i]);
        }
        else if(arr[i]==1){
            a.push_back(arr[i]);
        }
    };
    for(int i=0;i<9;i++){
        if(arr[i]==2){
            a.push_back(arr[i]);
        }
        
    }
    showdq(a);
return 0;
}