#include <iostream>
#include <vector>   // Standard Library 컨테이너
#include <algorithm> // Standard Library 알고리즘

int main() {
    std::vector<int> v; // 템플릿 기반 표준 컨테이너
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);

    std::sort(v.begin(), v.end()); // 표준 알고리즘

    for(size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    return 0;
}