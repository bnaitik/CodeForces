#include <iostream>
#include <string>
using namespace std;


int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    bool works = 1;
        if(s1.length() != s2.length()) cout<<"NO"<<endl;
    else{
        for(int i=0 ; i<s1.length() ; i++){
            if(s1[i]!=s2[s1.length() -i-1]){
                works = 0;
                break;
            }
        }
        cout<<((works == 1)? "YES" : "NO")<<endl;
    }

    return 0;
}