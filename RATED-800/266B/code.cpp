#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,t;cin>>n>>t;
	string input;cin>>input;

	for(int i=0 ; i<t ; i++){
		for(int j=0 ;j<n-1 ; j=j){
			if(input[j] == 'B' && input[j+1] == 'G'){
				swap(input[j], input[j+1]);
				j+=2;
			}
			else{
				j+=1;
			}
		}
	}

	cout<<input<<endl;

	return 0;
}
