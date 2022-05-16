#include<iostream>
using namespace std;
void printarray (int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<" ";
    }cout<<endl;
}
void sort(int arr[],int n)
{
    int l=0;

   int mid=0;

   int r=n-1;

   while(mid<=r)
   {
            if(arr[mid]==0)
        {
            swap(arr[mid],arr[l]);
            mid++;
            l++;
        }

           else if(arr[mid]==1)
        {
               mid++;
        }

           else if(arr[mid]==2)
        {
            swap(arr[mid],arr[r]);
            r--;            
        }

   }
}
int main()
{
    int arr[8]={2,1,0,2,1,2,1,0};
    sort(arr,8);
    printarray(arr,8);
    return 0;
}