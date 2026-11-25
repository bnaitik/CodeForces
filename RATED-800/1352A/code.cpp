#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int n;
    int k;
    int arr[4];

    for(int i=0; i<t; i++){
        cin >> n;

        k=0;

        for(int j=0; j<4; j++){
            arr[j] = 0;
        }

        if(n/10000 != 0){
            arr[0] = (n/10000)*10000;
            n = n%10000;
            k++;
        }

        if(n/1000 != 0){
            arr[1] = (n/1000)*1000;
            n = n%1000;
            k++;
        }

        if(n/100 != 0){
            arr[2] = (n/100)*100;
            n = n%100;
            k++;
        }

        if(n/10 != 0){
            arr[3] = (n/10)*10;
            n = n%10;
            k++;
        }

        if(n != 0){
            k++;
        }

        cout << k << endl;

        for(int j=0; j<4; j++){
            if(arr[j] != 0){
                cout << arr[j] << " ";
            }
        }

        if(n != 0){
            cout << n;
        }

        cout << endl;
    }

    return 0;
}
