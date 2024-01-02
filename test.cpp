#include <iostream>
#include <thread>

void even()
{
    for (int i = 0; i < 20; i++)
    {
        std::cout<<"hello";
    }
}
void odd()
{
    for (int i = 0; i < 20; i++)
    {
        std::cout<<"odd";
    }
}

int main()
{
    thread t1(even); // Pass the function even as an argument to the thread constructor
    t1.join();       // Join the thread before main exits
    thread t2(odd); // Pass the function even as an argument to the thread constructor
    t1.join();       // Join the thread before main exits
    return 0;
}
