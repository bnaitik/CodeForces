#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> vols;

    double val;

    double total_orange = 0;

    for(int i=0 ; i<n ; i++){
        cin>>val;
        total_orange += val/100;
    }

    double ans = (total_orange/n)*100;
    
    cout<<ans<<endl;

    return 0;
}