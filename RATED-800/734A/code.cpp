#include <iostream>
using namespace std;

int main(){
	int n;
	string s;
	cin>>n>>s;

	int a = 0;
	int d = 0;

	for(int i=0 ; i<n ; i++){
		s[i]=='A'? a++:d++;
	}

	if(a==d) cout<<"Friendship";
	else if(a<d) cout<<"Danik";
	else cout<<"Anton";
	
	return 0;
}
