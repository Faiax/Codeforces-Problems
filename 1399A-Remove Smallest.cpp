#include <bits/stdc++.h>
using namespace std;
int main(){

    int t{0};
    cin >> t;
    while(t--){

        int n{0};
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        bool istrue = true;
        
        for(int j = n-1; j>0 ;j--){
            if(abs(a[j]-a[j-1]) > 1){
                istrue =  false;
                break;
            }
        }
        if(istrue){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }



    return 0;
}