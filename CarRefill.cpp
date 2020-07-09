#include<bits/stdc++.h>
using namespace std;

int minrefill(int n,int l){
	int curr=0,num=0;
	while(curr<=n){
		int last=curr;
		while(curr<=n && (curr+1 - last)<=l)
			curr++;
		if(last==curr)
			return -1;
		if(curr<=n)
			num++;
	}
	return num;
}

int main(){
	int n,l;
	cin>>n>>l;
	cout<<minrefill(n,l);
	return 0;
}
