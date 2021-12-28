#include<iostream>
using namespace std;
float circarea(float r)
{
    
    const float PI =  3.14159F;
    return PI * r * r;
}
int main()
{
    float radius;
    cout<<"Enter radius of the circle = ";
    cin>>radius;
    cout<<"Area of the circle is = " <<circarea(radius)<<endl;
}