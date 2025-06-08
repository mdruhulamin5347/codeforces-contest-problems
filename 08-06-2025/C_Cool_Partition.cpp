


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
        vector<int> freq(n+5);
        for(int i=0; i<n; i++){
            cin >> v[i];
            freq[v[i]]++;
        }
        if (freq[v[0]] <= 1){
            cout << 1 << endl;
            continue;
        }
        sort(freq.rbegin(),freq.rend());
        cout << freq[0] << endl;
    }
    
    return 0;
}