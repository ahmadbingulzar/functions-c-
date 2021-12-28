#include<iostream>
using namespace std;
int global_count=0;
void global()
{
    global_count++;
}
int local()
{
    //there is not need to initilize count with zero bcz in function it is always zero
    static int count;
    count++;
    return count;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        global();
    }
    for(int i=1;i<=5;i++)
    {
        local();
    }
    int local_count=local();

    cout<<"value for global = "<<global_count<<endl;
    cout<<"value for local  = "<<local_count<<endl;
}