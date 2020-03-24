#include <iostream>
#include <chrono>
long double factorial(int i) {
    long double result = 1;
    for (int j = 2; j < i + 1; j++) {
        result *= j;
    }
    return result;
}

int main()
{
    auto begin = std::chrono::steady_clock::now();
    long double res = factorial(150);
    auto end = std::chrono::steady_clock::now();

    auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    std::cout << "Recursive: " << elapsed_ns.count() << " ns\n";
}
