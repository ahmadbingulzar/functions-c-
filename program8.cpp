#include<iostream>
using namespace std;
struct Distance 
{
    int feet;
    float inches;
};

Distance add(Distance d1,Distance d2)
{
    Distance d3;
    d3.inches=d1.inches+d2.inches;
    d3.feet=0;
    if(d3.inches>=12.0)
    {
        d3.inches-=12.0;
        d3.feet++;
    }
    d3.feet+=d1.feet+d2.feet;
    return d3;
}
void distance(Distance d)
{
    cout<<d.feet<<"\'-"<<d.inches<<"\"";
}
int main()
{
    Distance d1,d2,d3;

    cout<<"Enter feet = ";
    cin>>d1.feet;
    cout<<"Enter inches = ";
    cin>>d1.inches;

    cout<<"Enter feet = ";
    cin>>d2.feet;
    cout<<"Enter inches = ";
    cin>>d2.inches;

    d3=add(d1,d2);
    cout<<endl;
    distance(d1);
    cout<<" + ";
    distance(d2);
    cout<<" = ";
    distance(d3);
    cout<<endl;
    return 0;
}