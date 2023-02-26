#include <bits/stdc++.h>
using namespace std;
int main(){


    int t{0};
    cin >> t;
    while(t--){

    int ans{0};
    int n{0};
    cin >> n;
    int a[n];
    for(int i{0}; i<n; i++){
        cin >> a[i];
    }

    if((a[0] != a[1] && a[1] == a[2])){
        ans = 1;
    }
    else{
        int x = a[0];
        for(int i = 1; i<n; i++){
            if(a[i]!=x){
                ans = i+1;
                break;
            }
        }
    }

    cout << ans << endl;
    
}


    return 0;

}