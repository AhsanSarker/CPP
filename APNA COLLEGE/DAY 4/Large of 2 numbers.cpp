#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter a =";
    cin>>a;
    cout<<"Enter b =";
    cin>>b;

    if(a>b)
    {
        cout<<"a  is large number="<< a <<endl;
    }
    else if(b>a)
    {
        cout<<"b is large number="<< b <<endl;
    }

    else
    {
        cout<<"number is equal"<<endl;
    }

    return 0;
}