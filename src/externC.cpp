// ex5_extern_c_static.cpp
#include <iostream>

extern "C" void c_style_function(int x) {
    std::cout << "[C linkage] x=" << x << "\n";
}

int main() {
    c_style_function(42);
    return 0;
}
