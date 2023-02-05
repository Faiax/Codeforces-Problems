
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n{0};
	int t{0};
	cin >> t;

	while(t--){

		cin >> n;

		if(n==1 || n==2){
			cout << 0 << endl;
		}
		else{
			cout << (n-1)/2 << endl;
		}
	}


	return 0;
} 
