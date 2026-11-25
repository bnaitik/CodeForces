// #include <iostream>
// using namespace std;

// int main(){
//     int t; cin>>t;
//     int n;
//     int count;
//     int a,b;
//     for(int i=0 ; i<t ; i++){
//         cin>>n;
//         a = n-1;
//         b = 1;
//         count = 0;
//         while(a>b){
//             count++;
//             a--;
//             b++;
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t>0) {
        long long n;
        cin >> n;
        cout << (n - 1) / 2 << "\n";
        t--;
    }
    return 0;
}
