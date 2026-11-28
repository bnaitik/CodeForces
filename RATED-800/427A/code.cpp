#include <iostream>
using namespace std;

int main(){
    int val, n, officers = 0;
    cin>>n;
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        cin>>val;
        if(val>=0)officers+=val;
        if(val == -1){
            if(officers <= 0) ans++;
            else{
                officers--;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}