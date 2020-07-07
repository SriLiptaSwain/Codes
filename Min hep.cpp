#include<bits/stdc++.h>
using namespace std;

void heapify(int h[],int i)
{
	if(i!=0)
	{
		if(h[(i-1)/2]>h[i])
		{
			swap(h[(i-1)/2],h[i]);
			heapify(h,(i-1)/2);
		}
		else
			return;
	}
	else
		return;
}
void insrt(int h[],int n)
{
	int i=0;
	while(h[i]!=-1)
		i++;
	if(i==n)
		return;
	cout<<"Enter the value:\n";
	cin>>h[i];
	heapify(h,i);
}
void downheapify(int h[],int i,int n)
{
	int j=0;
	if(j<=i)
	{
		if(2*j+1<=i && h[2*j+1]<h[j])
		{
			swap(h[2*j+1],h[j]);
			downheapify(h,2*j+1,n);
		}
		else if(2*j+2<=i && h[2*j+2]<h[j])
		{
			swap(h[2*j+2],h[j]);
			downheapify(h,2*j+2,n);
		}
		else
			return;
	}
	else
		return;
}
void del(int h[],int n)
{
	int i=0;
	while(h[i]!=-1 && i<n)
		i++;
	if(i==0)
		return;
	swap(h[0],h[i-1]);
	cout<<h[i-1]<<" is deleted\n";
	h[i-1]=-1;
	downheapify(h,i-2,n);
}
void prnt(int h[],int n)
{
	for(int j=0;j<n && h[j]!=-1;j++)
		cout<<h[j]<<'\t';
	cout<<'\n';
}
int main()
{
	int n,c=1;
	cout<<"Number of keys:\n";
	cin>>n;
	int heap[n];
	for(int i=0;i<n;i++)
		heap[i]=-1;
	while(c!=0)
	{
		cout<<"Enter your choice:\n";
		cin>>c;
		if(c==1)
			insrt(heap,n);
		else if(c==2)
			del(heap,n);
		else if(c==3)
			prnt(heap,n);
	}
	return 0;
}
