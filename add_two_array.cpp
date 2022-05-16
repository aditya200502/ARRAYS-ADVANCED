#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> &v){

    int s=0,e=v.size()-1;
    while(s<=e){

        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int>add(vector<int> &a,int n,vector<int> &b,int m){
    int i=n-1;
	int j=m-1;
	int carry=0;
	vector<int> ans;
	
	while(i>=0 && j>=0){
		
		int sum=a[i]+b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
		
	}
	//first case size of a> size of b
	
	while(i>=0 ){
		
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		
	}
	//second case size of a< size of b
	
	while(j>=0 ){
		
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}
	//third case size of a = size of b
	
	while(carry!=0 ){
		
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		
	}
	
	return reverse(ans);
	
}
int main(){

    vector<int> a={99};
    vector<int> b={1,2,3,4};
    vector<int>ans;
    ans=add(a,a.size(),b,b.size());
    for(int i=0;i<ans.size();i++){

        cout<<ans[i]<<" ";
    }
    return 0;
}