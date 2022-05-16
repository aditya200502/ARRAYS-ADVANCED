//array should be sorted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5},sum;
    cout<<"enter the value of sum";
    cin>>sum;
    int l,h,n,i;
    n=sizeof(arr)/sizeof(arr[0]);
    /* Now fix the first element one by one and find the
       other two elements */
    for(int i=0;i<n-1;i++)
    {
        /* To find the other two elements, start two index
           variables from two corners of the array and move
           them toward each other*/ 
        l=i+1;
        h=n-1;
        while(l<h)
        {
            if(arr[i]+arr[l]+arr[h]==sum)
            {
            cout<<arr[i]<<" "<<arr[l]<<" "<<arr[h]<<endl;
            return 0;
            }
            else if(arr[i]+arr[l]+arr[h]<sum)
            l++;
            else
            h--;
        }
    }
    cout<<"not found";
    return 0;
}