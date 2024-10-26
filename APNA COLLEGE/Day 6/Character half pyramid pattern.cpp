#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number = ";
    cin>>n;
    char ch;
    cout<<"Enter your character = ";
    cin>>ch;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
           cout<<ch;
           ch++;
        }
        cout<<endl;
    }
    return 0;
}