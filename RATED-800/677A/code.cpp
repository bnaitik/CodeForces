#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    vector <int> vec;
    int no;
    for(int i=0 ; i<n ; i++){
        cin>>no;
        vec.push_back(no);
    }
    
    int width = 0;

    for(int i=0 ; i<n ; i++){
        if(vec[i]>h){
            width+=2;
        }
        else{
            width++;
        }
    }

    cout<<width<<endl;

    return 0;
}