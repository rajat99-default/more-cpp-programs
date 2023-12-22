#include<iostream>
using namespace std;

int main() {
    int number = 42;

    // Get the memory address of the 'number' variable
    std::cout << "Memory address of 'number': " << &number << std::endl;

    return 0;
}
