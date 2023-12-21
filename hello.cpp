#include<iostream>
using namespace std;

class rajat
{
    public:
    int qwe(int x,int y)
    {
        return x,y;
    }
    static int A()
    {
        cout<<"test";
        return 0;
    }

};

rajat obj;

int main()
{
    // cout<<"hello";
    cout<<obj.qwe(23,24);
    rajat::A();
    return 0;
}