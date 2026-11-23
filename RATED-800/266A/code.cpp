#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string input;
    cin>>n>>input;
    int ans = 0;

    for(int i=1 ; i<n ; i++){
        if(input[i] == input[i-1]){
            ans++;
            continue;
        }
    }

    cout<<ans<<endl;
    return 0;
}