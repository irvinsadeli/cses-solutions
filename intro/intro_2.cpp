#include <iostream>
#include <vector>

int main(){
    long long length;
    std::cin >> length;
    long long total_sum = length * (length +1) / 2;
    long long input_sum = 0;
    for (int i = 0; i < length-1; i++)
    {
        long long next;
        std::cin >> next;
        input_sum += next;
    }

    long long res = total_sum - input_sum;
    std::cout << res;
}