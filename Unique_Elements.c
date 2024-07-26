#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main() {
    int n;
    std::cin >>n;
    std::vector<int> arr(n);
    for (int i=0; i<n; i++) {
        std::cin >>arr[i];
    }
    std::vector<int> res;
    std::unordered_set<int> s;
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            res.push_back(arr[i]);
        }
    }
    for (auto a : res) {
        std::cout <<a <<" ";
    }
}