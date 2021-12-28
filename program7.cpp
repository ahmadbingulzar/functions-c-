#include<iostream>
using namespace std;
float lbs_to_kgs(float pound)
{
    return 0.453592*pound;
}
int main()
{
    float lbs;
    cout<<"Enter your weight in pounds = ";
    cin>>lbs;
    cout<<endl;
    cout<<"Your weight in kilograms is = "<<lbs_to_kgs(lbs)<<endl;
    return 0;
}
