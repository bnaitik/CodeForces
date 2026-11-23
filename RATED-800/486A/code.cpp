#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;cin>>n;
    long long ans = 0;
    if(n%2 == 0){
        ans = (n/2);
    }
    else ans = (-1*(n+1))/2;

    cout<<ans<<endl;
    return 0;
}