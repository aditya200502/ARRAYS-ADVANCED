//number should not be less than 0. 
#include<iostream>
using namespace std;
#define Size 2001

bool uniqueOccurrences(int* arr, int arrSize)
{
    int temp[2001] = {0};
    int i=0, j=0;
    
    for(i=0; i<arrSize; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] += 2001;
        }
        temp[arr[i]] += 1;  //by this way if 0 is there in our array then it will become 1.refer continue statemant.
    }
    //original array
    /*for(int i=0;i<arrSize;i++)
    {
        cout<<arr[i]<<endl;
    }*/
    //temp array containing index position.
    /*for(int i=0;i<Size;i++)
    {
        cout<<temp[i]<<endl;
    }*/
    for(i=0; i<Size-1; i++) //selection sort mechanism.
    {
        if(temp[i] == 0) 
            continue;   
        for(j=i+1; j<Size; j++)
        {
            if(temp[j] == 0) 
                continue;
            if(temp[i] == temp[j]) 
                return false;   //it is done to check if occurence are same or not.
        }
    }
    
    return true;    
}
int main()
{
    int arr[] = {-3,0,1,-3,1,1,1,-3,10,0};
    bool ans=uniqueOccurrences(arr,10);
    cout<<ans;
    return 0;
}