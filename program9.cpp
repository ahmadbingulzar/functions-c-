#include<iostream>
using namespace std;
void seperate(float n,float& int_part,float& frac_part)
{
    long temp=static_cast<long>(n);
    int_part=static_cast<float>(temp);
    frac_part=n-int_part;
}
int main()
{
    float number,int_part,frac_part;
    do{
        cout<<"Enter a real number :";
        cin>>number;
        seperate(number,int_part,frac_part);
        cout<<"Integer part is = "<<int_part<<endl
            <<"fraction part is = "<<frac_part<<endl;

    }while(number!=0.0);
    return 0;
}