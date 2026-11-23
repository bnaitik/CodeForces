#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int x;
    bool works = 1;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(x==1){
            works = 0;
            break;
        }
        else continue;
    }
    cout<<((works == 0)? "HARD" : "EASY")<<endl;

    return 0;
}