#include <iostream>
#include<string>
using namespace std;
int rightmostNonZero(long long a[], int n) 
{ 
    int c5 = 0; 
    for (int i = 0; i < n; i++) { 
        while (a[i] > 0 && a[i] % 5 == 0) { 
            a[i] /= 5; 
            c5++; 
        } 
    } 
    for (int i = 0; i < n; i++) { 
        while (c5 && a[i] > 0 && !(a[i] & 1)) { 
            a[i] >>= 1; 
            c5--; 
        } 
    } 
    long long ans = 1; 
    for (int i = 0; i < n; i++) { 
        ans = (ans * a[i] % 10) % 10; 
    } 
    if (c5) 
        ans = (ans * 5) % 10; 
  
    if (ans) 
        return ans; 
  
    return -1; 
} 
int main() {
	int t;
	cin>>t;
	for(;t!=0;t--){
	    int n;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<rightmostNonZero(a,n)<<"\n";
	}
	return 0;
}
