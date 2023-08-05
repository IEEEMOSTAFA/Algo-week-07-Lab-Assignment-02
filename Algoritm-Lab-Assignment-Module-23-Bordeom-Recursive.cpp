#include<bits/stdc++.h>
using namespace std;
const int N =1e5 +5;
int task[N];
long long dp[N];
long long freq[N];
long long solve(int num)
{
    if(num<=1) return dp[num];
    if(dp[num]!= -1)return dp[num];
    dp[num] = max(solve(num-1),solve(num - 2) + freq[num]);
    return  dp[num];
}
int main()
{
    for(int i=0;i<=N;i++)
    {
        dp[i] = -1;
    }
    int n;
    cin>>n;
    int maxx = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>task[i];
        freq[task[i]] += task[i];

        maxx = max(task[i],maxx);

    }
    int secondmax = 0;
    for(int i=1;i<maxx;i++)
    {
        secondmax = max(task[i],secondmax);
    }
    dp[0] = 0;
    dp[1] = 1;

    cout<<max(solve(maxx),solve(secondmax));
    return 0;

}
/*
9
1 2 1 3 2 2 2 2 3

*/