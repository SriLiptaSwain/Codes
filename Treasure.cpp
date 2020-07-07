#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int treasure(int a[][100],int n,int m,int i,int j){
    if(i>=n || j>=m)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
           
    dp[i][j] = a[i][j] + max(treasure(a,n,m,i+1,j),treasure(a,n,m,i,j+1));
   
    return dp[i][j];
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n,m;
    cout<< "enter the number of n and m ";
    cin>>n>>m;
    int a[100][100];
    cout<<"enter "<< n * m << " values";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
   
    cout <<"the max treasure is "<< treasure(a,n,m,0,0) <<endl;
    return 0;
}
