#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int s=5;
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]+a[j]==s)
            cout<<a[i]<<a[j]<<" ";
        }
    }
    return 0;
}