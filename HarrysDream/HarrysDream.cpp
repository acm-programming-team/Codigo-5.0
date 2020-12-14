#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define int long long
using namespace std;


signed main() {
    int t;
    cin >> t;
    while(t--)
    {
        int p = 2;
        int c = 1;
        int n;
        cin >> n;
        while(p<=n)
        {
            c++;
            p*=2;
        }
        cout<<c<<endl;  
    }
    return 0;
}
