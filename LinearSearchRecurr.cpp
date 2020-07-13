#include<bits/stdc++.h>
using namespace std;

int linearsearch(int a[],int n,int k){
	if(n==-1)
		return -1;	
	if(a[n-1]==k)
		return n-1;
	else
		return linearsearch(a,n-1,k);
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<linearsearch(a,n);
	return 0;
}
