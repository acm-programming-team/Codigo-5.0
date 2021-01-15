#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n;
    cin >> n;
    long long arr[n];
    int c1 = 0;
    int c2 = 0;
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == 2)
            c1++;
        else if(arr[i] == 0)
            c2++;
    }
    int p1 = 0;
    int p2 = 0;
    for(int i=1;i<c1;i++)
    {
        p1+=i;
    }
    for(int i=1;i<c2;i++)
    {
        p2+=i;
    }
    cout<<p1+p2<<endl;
    return 0;
}
