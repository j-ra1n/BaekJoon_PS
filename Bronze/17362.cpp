// 17362.cpp 수학은 체육과목 입니다 2

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n <= 5) cout << n << '\n';
    else
    {
        if ((n - 5) / 4 % 2 == 0)
            cout << 5 - (n-5) % 4 << '\n';
        else
            cout << 1 + (n - 5) % 4 << '\n';
    }
}