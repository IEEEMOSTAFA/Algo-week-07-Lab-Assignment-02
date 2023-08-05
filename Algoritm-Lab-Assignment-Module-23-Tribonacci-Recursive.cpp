#include<bits/stdc++.h>
using namespace std;
class solution
{
public:
long long dp[38];
solution()
{
    for(int i = 1;i<38;i++)
    
        dp[i] = -1;
    
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
}
long long tri(int n)
{
    if(n<=2) return dp[n];
    if(dp[n] != -1) return dp[n];
    dp[n] = tri(n-1) + tri(n-2) + tri(n-3);
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
