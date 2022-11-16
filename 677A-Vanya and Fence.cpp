#include  <bits/stdc++.h>

using namespace std;

int main() {


    int count{0};

	int h{ 0 }; // height of fence
				// thus, no friend should be more than h

	int n{ 0 }; // number of firends

	cin >> n >> h;
	// width of normal = 1 // bent  = 2
	int arr[n];

	for (int i = 0; i < n; i++) {

		cin >> arr[i];
		if (arr[i] <= h) {
			count++;
		}
		else {
			count+=2;
		}


	}

	cout << count << "\n";



	return 0;
}
