#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    std::cin >>s;
    int c=0,maxi=INT_MIN;
    for (auto ch : s) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            c++;
            maxi=max(maxi,c);
        }
        else {
            c=0;
        }
    }
    printf("%d",maxi);
}