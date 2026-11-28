#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string a,b,t;
    cin>>a>>b>>t;
    a = a+b;
    sort(a.begin(), a.end());
    sort(t.begin(), t.end());

    cout<<((a == t)? "YES" : "NO" )<<endl;


    return 0;
}