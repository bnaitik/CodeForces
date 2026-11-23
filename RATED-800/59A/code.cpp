#include <iostream>
using namespace std;

int main(){
    string input;
    cin>>input;
    int small = 0;
    int big = 0;
    for(int i=0 ; i<input.size() ; i++){
        if(input[i]>='a' && input[i]<='z') small++;
        if(input[i]>='A' && input[i]<='Z') big++;
    }

    if((small == big) || small>big){
        for(int i=0 ; i<input.size() ; i++){
            if(input[i]>='A' && input[i]<='Z'){
                input[i] = input[i]+32;
            } 
        }
    }
    else{
        for(int i=0 ; i<input.size() ; i++){
            if(input[i]>='a' && input[i]<='z'){
                input[i] = input[i]-32;
            } 
        }
    }

    cout<<input<<endl;
    
    return 0;
}