#include<bits/stdc++.h>
using namespace std;
const int N =1e5 +5;
int task[N];
long long dp[N];
long long freq[N];
int main()
{
    int n;cin>>n;
    int maxx = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>task[i];
        freq[task[i]] += task[i];
        maxx = max(task[i],maxx);
    }
    dp[0] = 0;
    dp[1] = freq[1];
    for(int i=2;i<maxx + 5;i++)
    {
        dp[i] = max(dp[i-1],dp[i-2] + freq[i]);
    }
    cout<<dp[maxx];
}