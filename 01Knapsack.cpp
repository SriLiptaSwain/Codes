#include<bits/stdc++.h>
using namespace std;

int knapsack(int W, int v[],int w[],int n){
	int val=0;
	if(n==0||W==0)
		return 0;
	if(w[n-1]>W)
		return knapsack(W,v,w,n-1);
	else
		return max((v[n-1]+knapsack(W-w[n-1],v,w,n-1)),knapsack(W,v,w,n-1));
}

int main(){
	int n,W;
	cin>>n>>W;
	int v[n],w[n];
	for(int i=0;i<n;i++)
		cin>>v[i]>>w[i];
	cout<<knapsack(W,v,w,n);
	return 0;
}
