#include <iostream>
using namespace std;

class node{
public:
    int h;
    int g;
};

int main(){
    int n; cin>>n;
    node array[n];
    int home;
    int guest;
    for(int i=0 ; i<n ; i++){
        cin>>home>>guest;
        array[i].h = home;
        array[i].g = guest;
    }
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j) continue;
            if(array[i].h == array[j].g) count++;
        }
    }    
    cout<<count<<endl;
    return 0;
}