#include<iostream>
using namespace std;
float lbs_to_kgs(float pound)
{
    float kilograms=0.453592*pound;
    return kilograms;
}
int main()
{
    float lbs,kgs;
    cout<<"Enter your weight in pounds = ";
    cin>>lbs;
    cout<<endl;
   kgs =lbs_to_kgs(lbs);
    cout<<"Your weight in kilograms is = "<<kgs<<endl;
    return 0;
}
