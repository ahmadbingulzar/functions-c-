#include<iostream>
using namespace std;
struct Distance 
{
    int feet;
    float inches;
};
/*--------------------------------------------------*/
void display(Distance);
int main()
{
    Distance d1,d2;

    cout<<"Enter feet :"; cin>>d1.feet;
    cout<<"Enter inches :"; cin>>d1.inches;

   cout<<"Enter feet :"; cin>>d2.feet;
   cout<<"Enter inches :"; cin>>d2.inches;

    cout<<"\nd1 = ";
    display(d1);
    cout<<"\nd2 = ";
    display(d2);
    cout<<endl;
    return 0;
}
//function defination
void display(Distance d)
{
    cout<<d.feet<<"\'-"<<d.inches<<"\"";

}