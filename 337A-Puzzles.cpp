#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // decleration and inputting
    int least{0};
    int n{0}, m{0};
    cin >> n >> m;
    int f[m];

    for(int i=0; i<m; i++){
        cin >> f[i];
    }

    // main algorithm

    sort(f, f+m);

    least = f[n-1] - f[0];

    for(int i = 1; i<=m -n; ++i){

        if(f[i+n-1] - f[i] < least){
            least = f[i+n-1] - f[i];
        }
    }

    cout << least << endl;


    return 0;
}