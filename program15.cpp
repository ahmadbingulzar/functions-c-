#include<iostream>
using namespace std;
inline float lbs_to_kg(float pound)
{
    return 0.453592*pound;
}
int main()
{
    float lbs;

    cout<<"Enter your weight in pounds :";
    cin>>lbs;
    cout<<"Your weight in kilograms is = "<<lbs_to_kg(lbs)<<endl;
    return 0;
}