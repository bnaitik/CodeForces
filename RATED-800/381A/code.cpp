#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    int val;
    vector <int> vec;
    for(int i=0 ; i<n ; i++){
        cin>>val;
        vec.push_back(val);
    }
    int s=0,d=0;
    bool sirja = 1;
    for(int i=0 ; i<n ; i++){
        if(sirja){
            if(vec[0] > vec[n-1-i]){
                s+=vec[0];
                vec.erase(vec.begin());
            }
            else{
                s+=vec[n-1-i];
                vec.pop_back();
            }
            sirja=0;
        }
        else{
            if(vec[0] > vec[n-1-i]){
                d+=vec[0];
                vec.erase(vec.begin());
            }
            else{
                d+=vec[n-1-i];
                vec.pop_back();
            }
            sirja=1;
        }
    }
    cout<<s<<endl<<d<<endl;
    return 0;
}