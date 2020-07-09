#include<bits/stdc++.h>
using namespace std;

void knapsack(int W, int v[],int w[],int n){
	int wval=0,val=0;
	if(n==0||W==0)
		cout<<"Not possible";
	for(int i=n-1;i>=0;i--){
		if(w[i]<W && wval<W)
		{	
			wval+=w[i];
			val+=v[i];
		}
	}
	cout<<val<<endl;	
}

int main(){
	int n,W;
	cin>>n>>W;
	int v[n],w[n];
	for(int i=0;i<n;i++)
		cin>>v[i]>>w[i];
	knapsack(W,v,w,n);
	return 0;
}
