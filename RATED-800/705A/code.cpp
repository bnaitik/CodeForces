#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;cin>>n;
    string ans = "";
    for(int i=1 ; i<=n ; i++){
        if(i==1){
            ans+="I hate";
        }
        else if(i%2==0){
            ans+= " I love";
        }
        else{
            ans+=" I hate";
        }

        if(i == n){
            ans+=" it";
            break;
        }
        else{
            ans+=" that";
            continue;
        }
    }

    cout<<ans<<endl;

    return 0;
}