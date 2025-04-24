
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,m,l,r;
        cin >> n >> m >> l >> r;
        
        int cutting = n - m;

        for(int i=0; i<cutting; i++){
            if(i%2==0){
                if(r > 0){
                    r = r - 1;   
                }
                else if(l < 0){
                    l = l + 1;
                }                             
            }
            else if(i%2!=0){                
                if(l < 0){
                    l = l + 1;
                }
                else if(r > 0){
                    r = r - 1;   
                }
            }
        }
        cout << l << " " << r << endl;
    }
    return 0;
}