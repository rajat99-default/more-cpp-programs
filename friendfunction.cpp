#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int value) {
        data = value;
    }

    friend void displayData(MyClass obj);
};

void displayData(MyClass obj) {
    std::cout << "Data in MyClass: " << obj.data << std::endl;
}

int main() {
    MyClass myObj(42);
    displayData(myObj);

    return 0;
}
