#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    int total=240-k;
    int elapsed_time=0;;
    for(int i=1 ; i<=n ; i++){
        if(elapsed_time + 5*i > total) break;
        elapsed_time += 5*i;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}