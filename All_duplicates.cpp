#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,1,2,4,3};
     int count[5]={0},temp[]={0},k=0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]==arr[j])
                {
                    temp[k]=arr[i];
                    k++;
                }
        }
    }
    cout<<"the duplicate no is::"<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<temp[i]<<endl;
    }
    return 0;
}
