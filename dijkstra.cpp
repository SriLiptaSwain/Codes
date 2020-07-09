#include<bits/stdc++.h>
using namespace std;

int find_min(int w[],int tf[],int v)
{
	int min=999,ind=0;
	for(int i=0;i<v;i++)
	{
		if(tf[i]!=0)
		{
			if(w[i]<min)
			{	
				min=w[i];
				ind=i;
			}	
		}
	}
	//cout<<ind<<'\n';
	return ind;
}
void dijkstra(int w[][3],int e,int weight[],int v)
{
	int tf[v];
	for(int i=0;i<v;i++)
		tf[i]=0,weight[i]=999;
	weight[0]=0;
	for(int i=0;i<v;i++)
	{
		int min=find_min(weight,tf,v);
		tf[min]=1;
		int min_dist=999,min_ind;
		for(int j=0;j<e;j++)
		{
			if(w[j][0]==min && w[j][1]!=min && tf[w[j][1]]==0)
			{
				if(weight[min_ind]>w[j][2])
					min_ind=w[j][1];
				if(weight[w[j][1]]>w[j][2])
				{	
					weight[w[j][1]]=w[j][2];
					tf[w[j][1]]==1;
					
				}
			}
			else
				continue;
		}
	}
	
}

int main()
{
	int v,e;
	cout<<"Enter the number of vetices and edges:\n";
	cin>>v>>e;
	int w[e][3]={{0,2,8},{0,1,4},{1,2,2},{1,3,5},{2,3,5},{2,4,9},{3,4,4}};
	int weight[v];
	dijkstra(w,e,weight,v);
	for(int i=0;i<v;i++)
		cout<<weight[i]<<'\t';
	return 0;
}
