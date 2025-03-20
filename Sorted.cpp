#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool isSort = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1]) {
                isSort = false;
                break;
            }
        }
        if (isSort) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }



    return 0;
}