#include <bits/stdc++.h>
using namespace std;

int binary(int temp[],int x,int l,int r){
    if(l<=r){
        int mid=(l+r)/2;
        if(temp[mid]==x)
            return mid;
        if(temp[mid]<x)
            return binary(temp,x,mid+1,r);
        return binary(temp,x,l,mid-1);
    }
    return -1;
}

void sim(int c[],int mx,int a1[],int a2[],int n1,int n2){
    int u=0;
    for(int i=0;i<n1;i++)
    {
        int in=binary(a2,a1[i],0,n2-1);
        if(in==-1 || a1[i+1]==a1[i]) continue;
        c[u++]=a1[i];
    }
    while(c[u]!=0)
        c[u++]=0;
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n1,n2,n3;
	    cin>>n1>>n2>>n3;
	    
	    int a1[n1],a2[n2],a3[n3];
	    
	    for(int i=0;i<n1;i++)
	        cin>>a1[i];
	    for(int i=0;i<n2;i++)
	        cin>>a2[i];
	    for(int i=0;i<n3;i++)
	        cin>>a3[i];
	        
	    int mx=max(n1,max(n2,n3));
	    int c[mx]={0};
	    
	    sim(c,mx,a1,a2,n1,n2);
	    sim(c,mx,c,a3,mx,n3);
	    
	    if(c[0]==0)
	        cout<<-1;
	    else
	        for(int i=0;c[i]!=0;i++)
	            cout<<c[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
