#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr1[]={1,2,2,2,3,4};
    int arr2[]={2,2,3,3};
    for(int i=0;i<6;i++)
    {
        int temp=arr1[i];
        for(int j=0;j<4;j++)
        {
            if(temp>arr2[j])
            break;
            if(arr2[j]==temp)
            {
                cout<<arr2[j]<<" ";
                arr2[j]=INT_MAX;
                break;
            }
        }
    }
    return 0;
}