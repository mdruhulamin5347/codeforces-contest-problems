

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int start_idx = 0;
        int end_idx = n-1;
        for(int i=0; i<n; i++){
            if(v[i] == 1){
                start_idx = i;
                break;
            }
        }
        for(int j=n-1; j>=0; j--){
            if(v[j] == 1){
                end_idx = j;
                break;
            }
        }

        int ans = abs(end_idx - start_idx) + 1;

        if(ans > x){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}