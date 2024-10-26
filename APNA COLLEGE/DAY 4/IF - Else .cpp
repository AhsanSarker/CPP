#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age = ";
    cin>>age;

    if(age>=18){
        cout<<"Can vote"<<endl;
    }
    else{
        cout<<"Can not vote"<<endl;
    }
    
    if(age>=45)
    {
        cout<<"contest for election"<<endl;
    }
    
    return 0;
}