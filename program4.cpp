#include<iostream>
using namespace std;
void repchar(char,int);

int main()
{
    char character;
    int number;
    cout<<"Enter the character : ";
    cin>>character;
    cout<<"Enter the number of times it repeat : ";
    cin>>number;
    repchar(character,number);

}
void repchar(char ch,int num)
{
    for(int j=0;j<num;j++)
    {
        cout<<ch;
    }
    cout<<endl;
}