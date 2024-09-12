
#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Enter a and b\n";
    double a, t;
    int b;
    std::cin >> a >> b;
    std::cout << std::endl;
    t = a;
    while (b != 0) {
        if (b & 1) {
            a *= t;
        }
        t *= t;
        b >>= 1;
    }
    std::cout << a << std::endl;
    return 0;
}
