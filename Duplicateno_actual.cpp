#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,2};
     int ans=0;
    for(int i=0;i<5;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans<<endl;    
    //it will be 1^3^4 which is 6.Hence now we can do xor of this from 1 to n-1 we will get
    //repeating number i.e 2.
    for(int i=1;i<5;i++)
    {
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}
