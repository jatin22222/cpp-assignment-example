#include <cassert>
#include "main.cpp"  // Ensure this path correctly includes your main file.

void test_factorial() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    test_factorial();
    return 0;
}
