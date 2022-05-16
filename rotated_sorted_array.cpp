#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> &v){
    int n=v.size();
    int count=0;

    for(int i=1;i<n;i++){

        if(v[i-1]>v[i])
            count++;
    }
    if(v[n-1]>v[0])
        count++;
    return (count <= 1);

}
int main(){

    vector<int> v={1,2,3,4,5};
    cout<<check(v);
    return 0;
}