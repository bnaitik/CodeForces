#include <iostream>
using namespace std;

int main(){
    int limak;
    int bob;

    cin>>limak>>bob;
    int count = 0;
    while(limak<=bob){
        limak*=3;
        bob*=2;
        count++;
    }

    cout<<count<<endl;
    return 0;
}