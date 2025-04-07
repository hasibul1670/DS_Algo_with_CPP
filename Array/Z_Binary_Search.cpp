#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (q--) {
        int x;
        cin >> x;
        // binary search 
        int l = 0;
        int r = n - 1;
        bool isFound = false;
        while (l <= r) {
            int mid = (r + l) / 2;
            if (v[mid] == x) {
                isFound = true;
                break;
            }
            else if (v[mid] < x) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        cout << (isFound ? "found" : "not found") << endl;
    }

    return 0;
}