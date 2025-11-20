#include <iostream>
#include <cmath>

const long long mod = 1000000007;

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    long long n;
    std::cin >> n;
    std::cout << mod_exp(2, n, mod);
    return 0;
}
