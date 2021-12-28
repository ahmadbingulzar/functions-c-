#include<iostream>
using namespace std;
//function defination
void starline()
{
    for(int i=0;i<45;i++)
        {
            cout<<"*";
        }
        cout<<endl;
}

int main()
{
    starline();
    cout<<"Date type Ranges"<<endl;
    starline();
    cout<<"char         -128 to 127"<<endl;
    cout<<"short         -32,768 to 32,767"<<endl;
    cout<<"int           system dependent"<<endl;
    cout<<"long          -2,147,483,648 to 2,147,483,647"<<endl;
    starline();
    return 0;
}