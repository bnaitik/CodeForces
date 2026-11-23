#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int occ, cap;
    int ans=0;

    for(int i=0 ; i<n ; i++){
        cin>>occ>>cap;
        if(cap-occ >=2 ) ans++;
    }

    cout<<ans<<endl;
    
    return 0;
}