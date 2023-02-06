#include <bits/stdc++.h>

using namespace std;

int main(){


    int r{0} ,c {0};
    cin >> r >> c;

    for(int i = 1; i<=r; i++){ // for row
                                // must start from 1 cz 0%4= 0

        for(int j = 0; j<c; j++){ // for column

            if(i%4 == 0){

                if(j == 0){cout << "#";}
                else{cout << ".";}

            }

            else if(i%4 == 2){


                if(j == c-1){cout << "#";}
                else{cout << ".";}

            
            }

            else{cout << "#";} 

            }
        cout << endl;
    }

    return 0;
    
}