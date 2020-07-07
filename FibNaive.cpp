#include<bits/stdc++.h>
using namespace std;
int fibNaive(int n){
	if (n <= 1)
        return n;
	return fibNaive(n-1) + fibNaive(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fibNaive(n);
}
