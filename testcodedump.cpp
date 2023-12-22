#include<iostream>
#include<string>
#include<limits>  // Include the header for clearing the input buffer
using namespace std;

class Bank {
public:
    virtual void displayBankName() const = 0;
    virtual void withdrawMoney() = 0;
};

class RBI : public Bank {
public:
    void displayBankName() const override {
        cout << "RBI - Reserve Bank of India\n";
    }

    void withdrawMoney() override {
        cout << "Enter your name: ";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Clear the input buffer
        string name;
        getline(cin, name);

        if (name == "Rajat Sujane") {
            cout << "Authentication successful. You can withdraw money.\n";
        } else {
            cout << "Authentication failed. Access denied.\n";
        }
    }
};

class SBI : public RBI {
public:
    void displayBankName() const override {
        cout << "SBI - State Bank of India\n";
    }
};

class ICICI : public RBI {
public:
    void displayBankName() const override {
        cout << "ICICI Bank\n";
    }
};

class Canara : public RBI {
public:
    void displayBankName() const override {
        cout << "Canara Bank\n";
    }
};

class Axis : public RBI {
public:
    void displayBankName() const override {
        cout << "Axis Bank\n";
    }
};

int main() {
    int accountNumber;
    cout << "Enter your account number: ";
    cin >> accountNumber;

    Bank* bank;

    if (accountNumber >= 1 && accountNumber <= 10) {
        bank = new Axis();
    } else if (accountNumber == 11 || accountNumber == 12) {
        bank = new ICICI();
    } else if (accountNumber == 13 || accountNumber == 14) {
        bank = new Canara();
    } else if (accountNumber == 15 || accountNumber == 16) {
        bank = new SBI();
    } else {
        cout << "Invalid account number.\n";
        return 1;
    }

    bank->displayBankName();
    bank->withdrawMoney();

    delete bank; // Release allocated memory

    return 0;
}
