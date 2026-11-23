#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n; cin>>n;

    int val;
    int min = INT_MAX;
    int max = INT_MIN;

    int maxidx, minidx;

    for(int i=0 ; i<n ; i++){
        cin>>val;

        if(val>max){max = val; maxidx = i;}
        if(val<=min) {min = val; minidx = i;}
    }
    int ans = maxidx + (n - 1 - minidx);
    if(maxidx > minidx){
        ans--;
    }
    cout<<ans<<endl;
    return 0;
}