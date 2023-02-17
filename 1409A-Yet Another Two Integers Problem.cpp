#include <bits/stdc++.h>
using namespace std;

int main(){

    int t{0};
    cin >> t;
    for(int i = 0; i<t; i++){
        long double a{0}, b{0};
        cin >> a >> b;
        
        if(a == b){
            cout << 0 << endl;
        }
        else if(a> b){

            cout <<fixed << setprecision(0)<< ceil((a-b)/10) << endl;
        }
        else if(a<b){
            
            cout << fixed << setprecision(0)<< ceil((b-a)/10) << endl;
        }


    }

    return 0;
}