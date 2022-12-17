#include <bits/stdc++.h>


using namespace std;

int main(){


    int count = 0;
    int s{0}, n{0}; //n is the number of dragons
                    //s is your strength
    cin>> s >> n;

    pair <int,int> a[1000];


    for(int i =  0; i<n; i++){ // inputting the arrays
        cin >> a[i].first; 
        cin >> a[i].second;    
    }



    sort(a, a+n);// sorting the first element of the pair

    for(int i = 0; i<n;i++){ 

        if(s<=a[i].first){
            count++; // counter variable for determining the YES/NO
            break;
        }
        else{
            s= s+a[i].second;
        }
    }

    if(count>0){
        cout << "NO\n";

    }
    else{
        cout <<"YES\n";
    }

}