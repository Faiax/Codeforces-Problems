#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL); // this 2 blocks executes the code faster



    int x{0};
    int y{0};
    int z{0};

    
    int sumx{0};
    int sumy{0};
    int sumz{0};

    int n{0};
    cin >> n;

    while(n--){ // this block runs the code for n times

        cin >> x >> y >> z;
        sumx = x + sumx; // in every loop the value of x's are added/substraced here
        sumy = y + sumy;
        sumz = z + sumz;
        }

    if(sumx == 0 && sumx == 0 && sumx == 0) // if they are equal to 0 or not
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    

    return 0;
}