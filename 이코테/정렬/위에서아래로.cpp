// 위에서아래로.cpp

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << ' ';
    }
}