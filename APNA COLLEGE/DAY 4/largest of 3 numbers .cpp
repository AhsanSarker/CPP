#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    cout<<"Enter c = ";
    cin>>c;

    if(a>=b && a>=c)
    {
    cout<< "a is larger = "<<a<<endl;
    }
    else if(b>=c)
    {
        cout<<"b is larger = "<<b<<endl;
    }
    else
    {
        cout<<"c is larger = "<<c<<endl;
    }

    return 0;

}