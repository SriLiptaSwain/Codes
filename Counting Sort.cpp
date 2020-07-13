#include<bits/stdc++.h>
using namespace std;

void countingSort(int a[],int n,int m)
{	
	if(n==0)
		return;
	int count[m]={0};
	for(int i=0;i<n;i++)
		count[a[i]]++;
	int pos[m]={0};
	for(int i=1;i<m;i++)
		pos[i]=pos[i-1]+count[i=1];
	int a1[n];
	for(int i=0;i<n;i++){
		a1[pos[a[i]]]=a[i];
		pos[a[i]]++;
	}
	for(int i=0;i<n;i++)
		a[i]=a1[i];
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	countingSort(a,n,m);
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	return 0;
}
