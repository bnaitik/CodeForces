#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int ans[n] = {0};
    int x;
    for(int i=1 ; i<=n ; i++){
        cin>>x;
        ans[x-1] = i;
    }

    for(int i=0 ; i<n ; i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}