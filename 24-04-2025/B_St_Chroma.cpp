

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int>v;
        for(int i=0; i<n; i++){
            if(i!=x){
                v.push_back(i);
            }
        }

        if(n==1){
            cout << 0 << endl;
            continue;
        }
        if(x < n){
            v.push_back(x);
        }
        
        for(int val : v){
            cout << val << " ";
        }
        cout <<  endl;
    }
    return 0;
}