#include<iostream>
using namespace std;
void swapalt(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if((i+1)<size)          //imp line
        {
            int start=i;
            swap(arr[start],arr[start+1]);
        }
    }
    return;
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[6]={-7,9,11,19,15,0};
    swapalt(arr,5);
    printarray(arr,5);
    swapalt(brr,6);
    printarray(brr,6);
    return 0;
}