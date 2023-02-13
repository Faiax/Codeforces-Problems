#include <bits/stdc++.h>

using namespace std;

int main(){

    int t{0};
    cin >> t;

    for(int i=0;i<t; i++){

        
        vector<int> cnute;
        // test case  = 9876
        int n{0};
        cin >> n;

        if(n%10 != 0){ 
            cnute.push_back(n%10); // 9876 % 10 = 6
        }
        int ans = n%10; // = 6
        n = n-ans; // 9876-6 = 9870

        if(n%100 != 0){
            cnute.push_back(n%100); // 9870 % 100 = 70
        }
        ans = n%100; // = 70
        n = n- ans; // 9870-70 = 9800

        
        if(n%1000 != 0){
            cnute.push_back(n%1000);// 9800%1000 = 800
        }
        ans = n%1000; // = 800
        n = n- ans; // 9800-800 = 9000
        
 
        if(n%10000!=0)
        {
            cnute.push_back(n%10000);
        }
        
        if(n>=10000 && n%10000==0)
        {
            cnute.push_back(n);
        }




        cout << cnute.size() << endl;

        for(int i=0; i<cnute.size(); i++){
            cout << cnute[i] << " ";
            }
        cout << endl;
    }

}