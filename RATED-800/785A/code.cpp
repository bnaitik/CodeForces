#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    string input;
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        cin>>input;
        if(input == "Tetrahedron") ans+=4;
        if(input == "Cube") ans+=6;
        if(input == "Octahedron") ans+=8;
        if(input == "Dodecahedron") ans+=12;
        if(input == "Icosahedron") ans+=20;
    }

    cout<<ans<<endl;
    
    return 0;
}