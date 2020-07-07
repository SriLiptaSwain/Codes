#include<bits/stdc++.h>
using namespace std;

int EuclideanGCD(int a,int b){
	if(b==0)
		return a;
	a%=b;
	return EuclideanGCD(b,a);
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<EuclideanGCD(a,b)<<endl;
	return 0;
}
