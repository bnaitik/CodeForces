#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int middle = max(max(min(a,b), min(b,c)), min(a,c));

    cout<<(abs(a-middle) + abs(b-middle) + abs(c-middle))<<endl;

    return 0;
}