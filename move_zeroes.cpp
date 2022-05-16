#include<bits/stdc++.h>
using namespace std;
void movezero( vector<int> &v)
{
    int nonzero=0;
    //nonzero variable is initialized so that we can swap it with our traversing variable j.
    for(int j=0;j<v.size();j++)
    {
        if(v[j]!=0)
        {
            swap(v[j],v[nonzero]);
            nonzero++;
        }
    }
}
void print(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v={1,0,3,0,0,12};
    movezero(v);
    print(v);
    return 0;
}