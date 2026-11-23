#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>>s;
    bool works = 1;

    for(int i=65 ; i<=90 ; i++){
        if (s.find(char(i)) == string::npos && s.find(char(i + 32)) == string::npos)
        {
            cout<<"NO"<<endl; 
            works = false;
            break;
        }
    }

    if(works){
        cout<<"YES"<<endl;
    }

    return 0;
}