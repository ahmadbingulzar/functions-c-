#include<iostream>
using namespace std;

void repchar(char,int);

int main()
{
    repchar('-',43);
    cout<<"Date type Ranges"<<endl;
    repchar('=',23);
    cout<<"char         -128 to 127"<<endl;
    cout<<"short         -32,768 to 32,767"<<endl;
    cout<<"int           system dependent"<<endl;
    cout<<"long          -2,147,483,648 to 2,147,483,647"<<endl;
    repchar('-',43);
    return 0;
}
//function defination
void repchar(char character,int number)
{
    for(int i=0;i<number;i++)
        {
            cout<<character;
        }
        cout<<endl;
}