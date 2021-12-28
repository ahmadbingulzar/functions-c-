#include<iostream>
using namespace std;
void zerosmaller(int& a  ,int& b)
{
    if(a>b)
        b=0;
    else    
        a=0;
}
int main()
{
    int a ,b;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    zerosmaller(a,b);
    cout<<"a = "<<a<<" || b = "<<b<<endl;
}