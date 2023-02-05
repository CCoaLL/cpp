#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, div[100];

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> div[i];
    }

    sort(div, div+n);

    cout << div[0] * div[n-1];
}