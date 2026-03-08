#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;
    cout<<"enter side a:";
    cin>>a;
    cout<<"enter side b:";
    cin>>b;
    a=pow(a,2);
    b=pow( b,2);
    c=sqrt(a+b);
    cout<<"side c:"<<c<<endl;
    
}