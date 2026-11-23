#include <iostream>
#include <vector>
using namespace std;

int main(){
    int s1,s2,s3,s4, ans=0;
    int val;
    vector <int> vec;

    for(int i=0 ; i<4 ; i++){
        cin>>val;
        vec.push_back(val);
    }

    for(int i=0 ; i<4 ; i++){
        for(int j=i+1 ; j<4 ; j++){
            if(i==j) continue;
            if(vec[i] == -1 || vec[j] == -1) continue;

            if(vec[i] == vec[j]){
                ans++;
                vec[j] = -1;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}