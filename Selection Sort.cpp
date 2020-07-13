#include<bits/stdc++.h>
using namespace std;

void selectionsort(int a[],int n){
	for(int i=0;i<n;i++){
		int m = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[m])
				swap(a[j],a[m]);
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	selectionsort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	return 0;
}
