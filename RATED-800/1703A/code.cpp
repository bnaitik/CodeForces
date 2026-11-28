#include <iostream>
using namespace std;

bool check(string val){
    if((val[0] == 121 || val[0] == 89) && (val[1] == 101 || val[1] == 69) && (val[2] == 115 || val[2] == 83))
        return 1;
    
        return 0;
}

int main(){
    int t;
    cin>>t;
    string val;
    for(int i=0 ; i<t ; i++){
        cin>>val;
        cout<<((check(val)? "YES" : "NO"))<<endl;
    }
    return 0;
}