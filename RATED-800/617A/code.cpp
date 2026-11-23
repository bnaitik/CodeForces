#include <iostream>
using namespace std;

int main(){
    int input;
    cin>>input;
    int count=0;
    if(input == 1) cout<<1<<endl;
    else{
    while(input>=5){
        input-=5;
        count++;
    }
    while(input>=4){
        input-=4;
        count++;
    }
    while(input>=3){
        input-=3;
        count++;
    }
    while(input>=2){
        input-=2;
        count++;
    }
    while(input>=1){
        input-=1;
        count++;
    }

    cout<<count<<endl;
}
    return 0;
}