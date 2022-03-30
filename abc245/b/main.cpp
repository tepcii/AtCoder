#include<bits/stdc++.h>
using namespace std;
int n,a[10000],k;
int main()
{	
    cin >> n;
    for (int i = 1 ; i <= n ; i++) {
        cin >> k;
        a[k] = 1;
    }
    for (int i=0 ; i >= 0 ; i++)
        if (!a[i]) {
            cout << i;
            return 0;
        }
}