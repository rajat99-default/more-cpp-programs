#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Factors of " << num << " are: "<<endl;
    for (int i = 1; i <= num/2; i++) 
    {
        if (num % i == 0) {
            cout << i << " "<<endl;
        }
        else
    {
        cout<<i<<" is not the factor"<<endl;
    }
    }

    

    cout << endl;

    return 0;
}
