#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    std::cin >> s;
    int index=-1,c=0;
    for(int i=0; i<s.size(); i++) {
        c=0;
        for(int j=0; j<s.size(); j++) {
            if(s[i]==s[j])  c++;
        }
        if(c==1) {
            index=i;
            break;
        }
    }
    std::cout << index;
}