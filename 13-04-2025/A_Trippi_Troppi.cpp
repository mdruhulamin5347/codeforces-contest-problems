
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string make_country;        
        for(int i=0; i<3; i++){
            string s;
            cin >> s;
            make_country.push_back(s[0]);
        }
        cout << make_country << endl;
    }
    return 0;
}