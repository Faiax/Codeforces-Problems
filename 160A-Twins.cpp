#include <bits/stdc++.h> // this includes everything

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); // for efficiency 

    int n{0}; // number of coin
    cin >> n;
    int A[n]; // this array stores the value of n number of coin

    int sum{0};
    int sum2{0};
    int count{0};

    for(int i = 0; i< n; i++) // from first to last
    {
        cin >> A[i];
        sum += A[i] ;// sum of all the coin // a += b; is equivalent to a = a + b
    }

    sum = sum/2; // half of the given money

    sort(A, A+n);// sorts the number form small to big // from first(A) to last(A+n)

    for(int j = n -1; j>=0 ;j--) // from last to fast // input:5 , output: 4 3 2 1 0
    {
        sum2+= A[j];
        count++;
        if(sum< sum2){ break;}
    }

    cout << count << "\n";

    return 0;
}






















