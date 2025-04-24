
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<string> ch;
        for(int i=0; i<n; i++){
            string str = s;
            if(s[i] == '0' ){
                str[i]='1';          
            }
            else{
                str[i]='0';       
            }
            ch.push_back(str);
        }
        int cnt = 0;
        for(auto val : ch){
            for(int i=0; i<n; i++){
                cnt+= val[i] - '0';
            }
        }
        cout << cnt << endl;
    }
    return 0;
}