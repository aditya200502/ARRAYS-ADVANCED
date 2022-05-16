#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,2};
    int count[5]={0},temp;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
                {
                    count[arr[i]]+=1;
                    temp=arr[i];
                }
        }
    }
    for(int i=0;i<5;i++)
    {
        if(count[i]==1)
        cout<<"The duplicate no is:"<<temp<<endl;
    }
return 0;
}