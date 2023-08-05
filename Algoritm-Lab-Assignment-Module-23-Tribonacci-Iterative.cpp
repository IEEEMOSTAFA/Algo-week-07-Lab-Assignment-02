#include<bits/stdc++.h>
using namespace std;
const int N =1e5 +5;
int task[N];
long long dp[N];
long long freq[N];
class solution{
public:
long long dp[38];
solution()
{
    for(int i=1;i<38;i++)
    {
        dp[i] = -1;
    }
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;

}
int tri(int n)
{
    for(int i=3;i<=n;i++)
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    return dp[n];
}
};
int main()
{
    int n;
    cin>>n;
    solution a;
    
    cout<<a.tri(n);
    return 0;
}