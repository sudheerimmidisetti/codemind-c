#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    std::cin >>t;
    while(t--) {
        string s;
        std::cin >>s;
        string str=s;
        std::reverse(str.begin(), str.end());
        if(s==str) {
            std::cout <<"YES ";
            if (s.size()%2==0)      std::cout <<"EVEN
";
            else                    std::cout <<"ODD
";
        } 
        else {
            std::cout <<"NO
";
        }
    }
}