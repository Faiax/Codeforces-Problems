#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cin >> s;
    int count{0};

    int size = s.size();
    for(int i= 0; i < size; i++ ){

        if(s[i]>=33 && s[i]<=126){
        
        if(s[i] == 'H' || s[i] == 'Q' ||s[i] == '9' ){
            count = 1;
        }
    }
    }

    if(count != 0){
        cout <<"YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}