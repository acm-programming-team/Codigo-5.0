#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin >> s;
    int n = (int)s[0] - 115;
    for(int i=0;i<(int)s.length();i++)
    {
        if(s[i] - n > 122)
        {
            s[i] = s[i] - n - 122 + 96;
        }
        else
            s[i] = s[i] - n;
    }
    cout<<s<<endl;
    return 0;
}
