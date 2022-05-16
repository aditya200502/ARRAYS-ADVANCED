#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int> &v,int k){

    vector<int>temp(v.size());
    for(int i=0;i<v.size();i++){

        temp[(i+k)%v.size()]=v[i];

    }
     for(int i=0;i<v.size();i++){

        v[i]=temp[i];
    }
}
void print(vector<int> &v){

    for(int i=0;i<v.size();i++){

        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v={1,3,9,11,13};
    int k=3;
    rotate(v,k);
    print(v);
    return 0;
}