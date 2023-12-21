#include<iostream>
using namespace std;
class rajat
{
    public:
    int a;
    int A(int x , int y)
    {
        a=x;
        x=y;
        y=a;
        return 0;
    }
}obj;

int main()
{
    obj.A(1,2);
    return 0;
}
