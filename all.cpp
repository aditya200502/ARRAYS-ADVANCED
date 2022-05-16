#include<iostream>
using namespace std;
int main()
{
    int x[]={1,2,3,4,5,1,2,3,4};
    int count[10]={0};
    for(int i=0;i<9;i++)
    {
        count[x[i]]++;
    }
    //for reference only
    /*for(int i=0;i<10;i++)
    {
        cout<<count[i]<<".."<<endl;
    }*/
    for(int i=0;i<10;i++)
    {
        if(count[i]!=1 && count[i]!=0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}