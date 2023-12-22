#include<iostream>
using namespace std;

class Rajat
{
    public:
    int temp;
    int swap(int *x , int *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
        return *x,*y;
    }
};

Rajat obj;

int main()
{
    int x,y;
    cout<<"enter value 1 and 2\n";
    cin>>x>>y;
    cout<<obj.swap(&x,&y);
    return 0;
}