#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;

    cout<< &a << " =" << ptr<<"\n";
    
    cout <<sizeof(ptr)<<"\n";

    return 0;
}