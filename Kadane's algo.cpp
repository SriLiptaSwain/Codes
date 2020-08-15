#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i=0;
	    cin>>n;
	    int a[n];
	    for(;i<n;i++)
	        cin>>a[i];
	    int max1=0,max2=0;
	    for(i=0;i<n;i++)
	    {
	        max1+=a[i];
	        if(max2<max1)
	            max2=max1;
	        if(max1<0)
	            max1=0;
	   }
	   if(max2==0)
	    max2=a[0];
	   cout<<max2<<"\n";
	}
	return 0;
}
