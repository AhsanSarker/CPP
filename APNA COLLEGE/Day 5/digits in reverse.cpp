#include<iostream>
using namespace std;
int main()
{
 int d;
 cout<<"Enter your digits =";
 cin>>d; 

 while(d>0)
       {
        int lastdig = d%10;
        cout<<lastdig<<" ";
        d/=10;
       }
  cout<<endl;
  return 0;
}  