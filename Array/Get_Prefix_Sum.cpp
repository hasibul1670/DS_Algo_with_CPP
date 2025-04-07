#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long>pre(n+1);
    pre[0] = v[0];
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + v[i + 1];
    }

    for (int i = n; i > 0; i--)
    {
        cout << pre[i - 1] <<" ";
    }
    return 0;
}