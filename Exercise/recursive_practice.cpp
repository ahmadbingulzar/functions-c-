#include<iostream>
using namespace std;
int recursive(int number)
{
    if(number<=0)
    {
        cout<<"Enter positive number "<<endl;
        exit;
    }
    if(number>9)
    {
        cout<<"Counting completed "<<endl;
        exit;
    }
    else 
        return recursive(number+1);
}
int main()
{
    int number;
    cout<<"Enter a number = ";
    cin>>number;
    cout<<"Result of recursive is = "<<recursive(number)<<endl;
}