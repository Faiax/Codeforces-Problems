#include <iostream>
//#include  <bits/stdc++.h> 


using namespace std;

int main() {
	int n{0}; // number of room
	int p;// number of people present
	int q;// number of people that room can hold
	int count{ 0 };
	cin >> n;

	for (int i = 0; i < n; i++) { // will run the "numberofroom" times
		cin >> p >> q; // input
		

		if (q - p >= 2) {
			count++;
		}
	}
	cout << count;

	return 0;
}
