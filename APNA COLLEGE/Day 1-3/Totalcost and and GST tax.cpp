#include<iostream>
using namespace std;
int main(){

    float pencost,pencilcost,erasercost;

    cin>>pencost;
    cin>>pencilcost;
    cin>>erasercost;

    float totalcost=pencost+pencilcost+erasercost;

    cout<<"total = "<<totalcost<<endl;
    cout<<"total with GST = "<<(totalcost + (0.18*totalcost));

    return 0;
}