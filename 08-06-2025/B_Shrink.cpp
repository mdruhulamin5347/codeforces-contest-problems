

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        v[0] = 1;        
        int include = 3;
        for(int i=1; i<n-1; i++){
            v[i] = include;
            include++;
        }
        v[n-1] = 2;
        
        for(int val : v){
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}