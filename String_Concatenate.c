#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,s1;
    cin >>s >>s1;
    s+=s1;
    sort(s.begin(), s.end());
    cout <<s;
}