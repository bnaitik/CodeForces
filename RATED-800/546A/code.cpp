#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int borrow = 0;
    int cost = 0;
    for(int i=1 ; i<=w ; i++){
        cost+=k*i;
    }

    if(cost>n){
        borrow = cost - n;
        cout<<borrow<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}