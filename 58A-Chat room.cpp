#include <bits/stdc++.h> // this includes everything

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); // for efficiency 



    string s;
    cin >> s;

    string a = "hello";
    int x{0}; // counter value

    for(int i = 0; i < s.size(); i++) // runs the code for the string's length number of times
    {
        if(s[i] == a[x]) // if those 5 characters matches then x will be incremented
        {               
            x++;
            
        }
    }
    if(x ==5 )
    {
        cout << "YES\n";
    }
    else
    {
        cout <<"NO\n";
    }

    
    return 0;
}