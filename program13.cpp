#include<iostream>
using namespace std;
struct Distance{
    int feet;
    float inches;
};
void display(Distance);
void display(float);

int main()
{
    Distance d1;
    float d2;

    cout<<"Enter feet = ";
    cin>>d1.feet;
    cout<<"Enter inches = ";
    cin>>d1.inches;

    cout<<"Enter entire distance in inches = ";
    cin>>d2;

    cout<<"d1 is  = ";
    display(d1);
    cout<<endl;
    cout<<"d2 is = ";
    display(d2);
    cout<<endl;
    return 0;
}
void display(Distance d)
{
        cout<<d.feet<<"\'-"<<d.inches<<"\"";
}
void display(float d)
{
    int feet=static_cast<int>(d/12);
    float inches=d-feet*12;
    cout<<feet<<"\'-"<<inches<<"\"";
}