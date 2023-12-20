#include <iostream>
using namespace std;

class ShallowCopyExample {
public:
    int* data;

    ShallowCopyExample(int value) {
        data = new int(value);
    }

    // Copy constructor for shallow copy
    ShallowCopyExample(const ShallowCopyExample& other) : data(other.data) {}

    ~ShallowCopyExample() {
        delete data;
    }
};

int main() {
    int inputValue;
    std::cout << "Enter a value: ";
    std::cin >> inputValue;

    ShallowCopyExample original(inputValue);
    ShallowCopyExample shallowCopy = original;

    // Both original and shallowCopy point to the same memory location
    std::cout << "Original: " << *original.data << std::endl;
    std::cout << "Shallow Copy: " << *shallowCopy.data << std::endl;

    // Modify data through one object affects the other
    *original.data = 10;
    std::cout << "After modification:" << std::endl;
    std::cout << "Original: " << *original.data << std::endl;
    std::cout << "Shallow Copy: " << *shallowCopy.data << std::endl;

    return 0;
}
