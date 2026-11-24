#include <iostream>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    
    int arr[26];

    for(int i=0 ; i<26 ; i++){
        arr[i] = -1;
    }

    for(int i=1 ; i<input.size()-1 ; i+=3){
        arr[input[i] - 'a']++;
    }
    int ans = 0;
    for(int i=0 ; i<26 ; i++){
        if(arr[i]!=-1) ans++;
    }

    cout<<ans<<endl;

    return 0;
}