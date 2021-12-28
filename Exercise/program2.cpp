#include<iostream>
using namespace std;
double power(double n, int p)
{        double answer=1;

    for(int i=0;i<=p;i++)
    {
        answer*=n;
    }
    return answer;
}
int main()
{
    double number;
    int n_power;
    cout<<"Enter the number = ";
    cin>>number;
    cout<<"Enter the power = ";
    cin>>n_power;
    cout<<"Answer is  = "<< power(number,n_power)<<endl;
}