#include <bits/stdc++.h>
using namespace std;
int main(){

    int n{0};
    cin >> n;
    int count{0};
    string s;


    while(n--){

        cin >> s;

        if(s == "Tetrahedron"){
            count += 4;
        }
        else if( s =="Cube"){

            count += 6;
        }
        else if( s =="Octahedron"){

            count += 8;
        }        
        else if( s =="Dodecahedron"){

            count += 12;
        }
        else if( s =="Icosahedron"){

            count += 20;
        }
        else{

        }
        
    }
    cout << count << endl;

    return 0;
}