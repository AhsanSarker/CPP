#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    
    cout<<"Enter a =";
    cin>>a;
    cout<<"Enter b =";
    cin>>b;
    cout<<"Enter operator =";
    cin >>op;
    
     if(op =='+')
     {
        cout<<"a+b="<<(a+b)<<endl;
     }
     else if(op =='-')
     {
        cout<<"a-b="<<(a-b)<<endl;
     }
     else if(op =='*')
     {
        cout<<"a*b="<<(a*b)<<endl;
     }
     else if(op =='/')
     {
        cout<<"a/b="<<(a/b)<<endl;
     }
     else 
     {
        cout<<"Invalid operator"<<endl;
     }

     return 0;

}