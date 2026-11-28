#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int val;

    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int ans=0;

    for(int i=0 ; i<t ; i++){
        cin>>val;
        if(val>maximum){
            maximum = val;
            ans++;
        }
        if(val<minimum){
            minimum = val;
            ans++;
        }
    }
    cout<<ans-2<<endl;
    return 0;
}