#include <iostream>
#include <string>
using namespace std;

int main() {

	string s, si; // si variable for the anwer
	cin >> s;

	for (int i = 0; i < size(s); i++) { // run for the (sizeofthestring) number of times

		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'  || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y'){
			continue; // this statement skips to the next iteration
		}
		else {

			si += '.'; 
			si += tolower(s[i]); // take all the character lower

		}
	}


	cout << si << endl;

}
