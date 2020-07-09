#include<bits/stdc++.h>
using namespace std;

int group(int x[],int n){
	int g=0,l,r,i=0;
	while(i<n){
		l=i,r=i+1;
		while(i<n&&x[r]-x[l]<=12){
			i++;
			r=i;
		}
		++g;
		if(i==n)
			return g;
	}
	return g;
}

int main(){
	int n;
	cin>>n;
	int x[n],r[n]={0};
	for(int i=0;i<n;i++)
		cin>>x[i];
	cout<<group(x,n);
	return 0;
}
