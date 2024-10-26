#include<iostream>
using namespace std;
int main()
{
 int d;
 cout<<"Enter your digits =";
 cin>>d;
 int digsum=0; 

 while(d>0)
       {
        int lastdig = d%10;
        digsum+=lastdig;
        d/=10;
       }
  cout<<"sum = "<<digsum<<endl;
  return 0;
}  