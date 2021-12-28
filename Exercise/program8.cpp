#include<iostream>
using namespace std;
void swap(int &x,int & y)
{
    x = x+y;
    y = x-y;
    x = x-y;
}
int main()
{
    int a,b;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    swap(a,b);
    cout<<"A = "<<a<<"|| b = "<<b<<endl;
}