#include <bits/stdc++.h>
using namespace std;
#define n 4
void floyd(int p[][n])
{
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
               p[i][j] = min( p[i][j] , p[i][k]+p[k][j] ); 
}
int main() {
	int g[n][n]={ {0, 3,INT_MAX, 7},  
                  {8,0,2, INT_MAX},  
                  {5, INT_MAX, 0, 1},  
                  {2,INT_MAX,INT_MAX, 0}  },p[n][n];
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
        {
        	if(g[k][i]==INT_MAX)
        		p[k][i]=9999;
        	else
     	   		p[k][i]=g[k][i];
     	}
	floyd(p);
	cout<<"Result:\n";
    for (int i = 0; i < n; i++)  
    {  
        for (int j = 0; j < n; j++)  
        {  
            if (p[i][j] == INT_MAX)  
                cout<<"INF"<<'\t';  
            else
                cout<<p[i][j]<<'\t';  
        }  
        cout<<endl;  
    }  
	return 0;
}
