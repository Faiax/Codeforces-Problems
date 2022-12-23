#include <bits/stdc++.h>
using namespace std;

int main(){



    int a{0};
    int b{0};
    int c{0};
    cin >> a >> b>> c;


    int ans1 = a+b*c;
    int ans2 = a*(b+c);
    int ans3 = a*b*c;
    int ans4 = (a+b)*c;
    int ans5 = a+b+c;
    int ans = max(ans5,(max(ans4, (max (ans3,(max(ans1, ans2)))))));

    cout << ans << endl;



    return 0;

}


/* this code will exceed the exceptation
wont be accepted!!
    int ans{0};
    int a[3];
    for(int i = 0; i<3; i++){
        cin >> a[i];
    }
    sort(a, a+3);
    
    if(a[0]+a[1]+a[2] > ((a[0]+a[1])*a[2]) && (a[0]*a[1]*a[2]) ){

        ans = a[0]+a[1]+a[2]; 
    }

    else if(a[0]*a[1]*a[2] > (a[0]+a[1])*a[2]){
        ans  = a[0]*a[1]*a[2];
    }
    else{
        ans = (a[0]+a[1])*a[2];
    }

    cout << ans << endl;


*/