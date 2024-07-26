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
    int flag=0;
    for (int i=0; i<n; i++) {
        if (c[arr[i]]==arr[i]) {
            if (ans.empty() || ans.back()!=arr[i]) {
                ans.push_back(arr[i]);
                flag=1;
            }
        }
    }
    float average=0;
    for(int i=0; i<ans.size(); i++) {
        average+=ans[i];
    }
    if(flag==1) std::cout <<std::fixed <<std::setprecision(2) <<average/ans.size();
    else        std::cout <<-1;
}