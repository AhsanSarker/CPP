#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number = ";
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        if(i==3)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
    
}