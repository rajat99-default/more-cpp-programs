#include <iostream>

class MyNumber {
private:
    int value;

public:
    // Constructor without initialization list
    MyNumber(int val) {
        value = val;
    }

    // Unary increment operator overloading without initialization list
    void operator++() {
        // Increment the value
        ++value;
    }

    // Function to get the value
    int getValue() {
        return value;
    }
};

int main() {
    // Create an instance of MyNumber
    MyNumber num(7);

    // Use the unary increment operator
    ++num;

    // Display the result
    std::cout << "Updated number: " << num.getValue() << std::endl;

    return 0;
}
