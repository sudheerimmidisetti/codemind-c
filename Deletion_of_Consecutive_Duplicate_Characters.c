#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    std::cin >>t;
    while(t--) {
        string s;
        std::cin >>s;
        string str="";
        for (int i=0; i<s.size(); i++) {
            if(s[i]==s[i+1]) {
                str+=s[i];
            }
        }
        printf("%d
",str.size());
    }
}