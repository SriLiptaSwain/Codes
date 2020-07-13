#include<bits/stdc++.h>
using namespace std;

void polmulnaive(int a[],int b[],int n){
	int c[2*n-1]={0};
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			c[i+j]+=a[i]*b[j];
	int k=0;
	while(k!=2*n-1)
		cout<<c[k++]<<" ";
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i];
	polmulnaive(a,b,n);
	return 0;
}
