#include <bits/stdc++.h>
using namespace std;
int main(){

    int n{0};
    cin >> n;
    int count{0};
    int haf = n/2;

    if(n%2){count = 0;}
    else{
        for(int i = 2; i<haf; i++){

            haf--;
            count++;
            if(haf==i){
                break;
            }

        }
    }
    
    cout << count << endl;

    return 0;
}