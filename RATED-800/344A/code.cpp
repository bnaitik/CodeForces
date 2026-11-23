#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int prev; cin>>prev;
    int curr;
    int ans = 1;

    for(int i=0 ; i<n-1 ; i++){
        cin>>curr;
        if(prev!=curr){
            ans++;
        }
        prev = curr;
    }

    cout<<ans<<endl;

    return 0;
}