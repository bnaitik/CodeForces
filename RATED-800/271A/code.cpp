	#include <iostream>
	#include <set>
	using namespace std;

	bool isDistinct(int n){
		int a,b,c,d;
		a = n%10;
		n/=10;
		b = n%10;
		n/=10;
		c = n%10;
		n/=10;
		d = n%10;
		n/=10;

		if(set<int>{a, b, c, d}.size() == 4) return 1;
		else return 0;
	}

	int main(){
		int n;cin>>n;
		n++;
		while(!isDistinct(n)){
			n++;
		}
		cout<<n<<endl;
		return 0;
	}