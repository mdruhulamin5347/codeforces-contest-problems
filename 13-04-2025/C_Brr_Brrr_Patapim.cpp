

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> uniqueValues;
        vector<bool> used(2 * n + 1, false);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int x;
                cin >> x;
                if (!used[x]) {
                    used[x] = true;
                    uniqueValues.push_back(x);
                }
            }
        }

        int missing = -1;
        for (int i = 1; i <= 2 * n; ++i) {
            if (!used[i]) {
                missing = i;
                break;
            }
        }

        cout << missing << " ";
        for (int val : uniqueValues) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}