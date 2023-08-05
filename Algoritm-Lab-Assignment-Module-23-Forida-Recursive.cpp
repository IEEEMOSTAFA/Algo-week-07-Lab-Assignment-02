#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+ 5;
long long gold[N];
long long dp[N];
long long solve(int n)
{
//base case
if(n <= 0) return 0;
if(n==1) return gold[1];
//if current state already done
if(dp[n] != -1) return dp[n];
//solve current state from small sub problem
long long now =0;
for(int i=n-2;i>= 0;i--)
{
    now = max(now ,solve(i) + gold[n]);
    dp[n] = now;
    

}
return now;
}
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>gold[i];
            dp[i] = -1;
        }
        long long a = solve(n);
        long long b = solve(n-1);
        if(n == 1)
        {
         cout<<"case "<<i<<": "<<gold[1]<<endl;
        }
        
        else if (n == 0)
        {
         cout<<"case "<<i<<": "<<0<<endl;   
        }
       
        else  
        {
            cout<<"case "<<i<<": "<<max(a,b)<<endl;
        }
      
    }
}