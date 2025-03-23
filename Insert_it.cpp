#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long>A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int m;
    cin >> m;
    vector<long long>B(m);
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    int x;
    cin >> x;

    A.resize(n + m);

    for (int i = n - 1; i >= x; i--) {
        A[i + m] = A[i];
    }

    for (int i = 0; i < m; i++)
    {
        A[x + i] = B[i];
    }



    for (int i = 0; i < m + n; i++)
    {
        cout << A[i] << " ";
    }




    return 0;
}