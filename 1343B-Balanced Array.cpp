#include <bits/stdc++.h>
using namespace std;
int main(){// constructive algorithm



    int t{0};
    cin >> t;
    while(t--){

        int sum{0}, sum2{0};
        int n{0};
        cin>> n;
        vector<int>num;
        num.push_back(2);

        if(n%4 != 0){
            cout << "NO\n";
        }
        else{
            cout << "Yes\n";

            for(int i = 1; i<=n; i++){
                if(i%2==0){
                    num.push_back(i);
                }
            }
            for(int i = 1; i<=n; i++){
                if(i%2!=0){
                    num.push_back(i);
                    sum +=i;
                }
            }

            for(int i = 1; i<=num.size()/2; i++){
                sum2+=num[i];
            }

            int c = sum2-sum;
            int lastnum = num.back();
            num.back() = c+lastnum;

            for(int i = 1; i<=n; i++){
                cout << num[i] <<  " ";
            }

        }

    }

    return 0;
}