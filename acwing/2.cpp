//0-1背包模板题，未进行滚动数组优化
#include<bits/stdc++.h>
using namespace std;
int N,V;
int w[1001],v[1001],dp[1001][1001]={0};

int main(){
    cin>>N>>V;
    for (int i=1;i<=N;i++)
        cin>>v[i]>>w[i];
    for(int i=1;i<=N;i++)
        for(int j=1;j<=V;j++){
            dp[i][j]=dp[i-1][j];
            if(j-v[i]>=0)
                dp[i][j]=max(dp[i][j],dp[i-1][j-v[i]]+w[i]);
        }                
    printf("%d\n",dp[N][V]);
    return 0;
}