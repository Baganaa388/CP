#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    int n;
    ll mod = 1000000007;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0] = 1;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=6; j++){
            if(j<=i){
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }

    // for(auto x : dp){
    //     cout<<x<<" ";
    // }
    cout<<dp[n]<<endl;
    return 0;
}