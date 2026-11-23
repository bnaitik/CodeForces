#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int r1; cin>>r1;
    int x[n] = {0};
    int val;
    
    for(int i=1 ; i<=r1 ; i++){
        cin>>val;
        x[val-1]++;
    }
    int r2; cin>>r2;
    for(int i=1 ; i<=r2 ; i++){
        cin>>val;
        x[val-1]++;
    }
    bool works=1;
    for(int i=0 ; i<n ; i++){
        if(x[i] == 0){
            works = 0;
            break;
        }
    }

    cout<<((works)? "I become the guy." : "Oh, my keyboard!")<<endl;

    return 0;
}