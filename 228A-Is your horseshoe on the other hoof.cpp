#include <bits/stdc++.h>
using namespace std;

int main() {

    int s[4];

    int count{ 0 };

    for (int i = 0; i < 4; i++) {
     cin >> s[i];
    }
    sort(s, s + 4);

    for (int x = 0; x < 3; x++) {

        if (s[x] == s[x + 1]) {
            count++;
        }
    }
    
    




    cout << count << "\n";
    return 0;
}