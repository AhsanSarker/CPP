#include<iostream>
using namespace std;
int main(){
int a,b;
    cout<<"Enter a =";
    cin>>a;
    cout<<"Enter b =";
    cin>>b;
    
    int largest =(a>=b)?a:b;
    cout<<"Largest is = "<<largest<<endl;

    return 0;
}