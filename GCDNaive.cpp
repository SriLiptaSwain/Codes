#include<bits/stdc++.h>
using namespace std;

int gcdnaive(int a, int b){
	int d;
	for(int i=min(a,b);i>0;i--)
		if(a%i==0 && b%i==0){
			d=i;
			return d;
		}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcdnaive(a,b);
	return 0;
}
