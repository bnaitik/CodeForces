#include <iostream>
using namespace std;

int main(){
    int stops; cin>>stops;
    int curr = 0;
    int exit;
    int enter;

    int ans = INT_MIN;

    for(int i=0 ; i<stops ; i++){
        cin>>exit>>enter;
        curr = curr-exit + enter;
        ans = max(ans, curr);
    }

    cout<<ans<<endl;
    
    return 0;
}