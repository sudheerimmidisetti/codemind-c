#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >>n;
    vector<int> arr(n);
    vector<int> ans;
    map<int, int> c;
    for (int i=0; i<n; i++) {
        cin >>arr[i];
        c[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    for (int i=0; i<n; i++) {
        if (c[arr[i]]==arr[i]) {
            if (ans.empty() || ans.back()!=arr[i]) {
                ans.push_back(arr[i]);
            }
        }
    }
    cout <<ans.size();
}