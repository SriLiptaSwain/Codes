#include<bits/stdc++.h>
using namespace std;

struct item{
	int v;
	int w;
};

bool comp(struct item l1,struct item l2){
	return (l1.v/l1.w) > (l2.v/l2.w);
}

int fracknapsack(int W,struct item l[],int n){
	if(n==0)
		return 0;
	
	sort(l,l+n,comp);
	
	double val=0,w=0;
	for(int i=0;i<n;i++){
		if(w==W)
			return val;
		else if(w+l[i].w<W){
			w+=l[i].w;
			val+=l[i].v;
		}
		else{
			int remain=W-w;
			val+=remain*l[i].v/l[i].w;
			break;
		}
	}
	return val;
}

int main(){
	int n,W;
	cin>>n>>W;
	struct item l[n];
	for(int i=0;i<n;i++)
		cin>>l[i].v>>l[i].w;
	cout<<fracknapsack(W,l,n);
	return 0;
}
