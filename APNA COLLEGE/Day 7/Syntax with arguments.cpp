#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = a+b;
    return sum;
}
int diff(int a, int b)
{
    int diff = a-b;
    return diff;
}

int main()
{
    int s=sum(2,4);
    cout<<"Sum = "<<s<<endl;

    int d=diff(4,2);
    cout<<"Diff = "<<d<<endl;

    return 0;
}