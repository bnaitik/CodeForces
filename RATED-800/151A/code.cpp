#include <iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = 0;
    int salt = 0;
    int lemon = 0;
    int ans=0;
    while(drink + n*nl <=k*l && lemon + n <=c*d && salt + n*np <= p){
        drink+=n*nl;
        salt+=n*np;
        lemon+=n;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}