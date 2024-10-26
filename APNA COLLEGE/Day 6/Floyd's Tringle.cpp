#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number1 = ";
    cin>>n;
   int num;
    cout<<"Enter your character2 = ";
    cin>>num;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
           cout<<num++<<" ";
        }
        cout<<endl;
    }
    return 0;
}