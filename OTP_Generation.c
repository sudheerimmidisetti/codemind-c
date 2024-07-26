#include <iostream>
#include <string>
int main() {
    std::string s;
    std::cin >>s;
    std::string otp;
    for (char ch : s) {
        int d=ch-'0';
        if (d%2!=0) {
            int sq=d*d;
            otp += std::to_string(sq);
        }
    }
    std::cout <<otp;
}