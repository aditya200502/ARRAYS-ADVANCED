#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
void merge(vector<int> &nums1,int m,vector<int> &nums2,int n)
{
    int i=0,j=0;
    vector<int> v;
    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
        {
            v.push_back(nums1[i++]);
        }
        else
            v.push_back(nums2[j++]);
    }
    if(i==m)
    {
        while(j<n)
        {
             v.push_back(nums2[j++]);
        }
    }
    if(j==n)
    {
        while(i<m)
        {
             v.push_back(nums1[i++]);
        }
    }
    print(v);
}
int main()
{
    vector<int> nums1={1,3,5,9,10};
    vector<int> nums2={2,4,6,7,8};
    int m=nums1.size(),n=nums2.size();
    merge(nums1,m,nums2,n);
}