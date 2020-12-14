#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    while((n==1)||(n%10 == 0 && n>0))
    {
        if(n==1)
        {
            cout<<"NO";
            return 0;
        }
        n=n/10;
        
    }
    cout<<"YES";
    return 0;
}
