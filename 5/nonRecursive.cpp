#include <iostream>
#include <chrono>
long double factorial(int i) {
    if (i == 0) return 1;
    return i * factorial(i - 1);
}

int main()
{
    auto begin = std::chrono::steady_clock::now();
    long double res = factorial(150);
    auto end = std::chrono::steady_clock::now();

    auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    std::cout << "Non recursive: " << elapsed_ns.count() << " ns\n";
}
