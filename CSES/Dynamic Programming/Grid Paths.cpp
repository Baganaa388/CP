#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin>>n;
    int dp[n+1][n+1];
    long long int mod = 1000000000 + 7;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            dp[i][j] = 0;
        }
    }
    
    char grid[n+1][n+1];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }

    dp[0][0] = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(grid[i][j] == '.'){
                dp[i][j+1] += (grid[i][j+1] != '*') ? (dp[i][j]%mod) : 0;
                dp[i+1][j] += (grid[i+1][j] != '*') ? (dp[i][j]%mod) : 0;
            }
            else dp[i][j] = 0;
        }
    }


    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[n-1][n-1]%mod;
    return 0;
}