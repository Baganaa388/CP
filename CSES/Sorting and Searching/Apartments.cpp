#include<bits/stdc++.h>

using namespace std;
#define ll long long 
int main(){
    int n,m;
    ll k;
    cin>>n>>m>>k;
    vector<ll> a(n);
    vector<ll> b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<(n-1); i++){
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<ll> result;
    for(auto x : b){
        for(auto y : a){
            result.push_back(abs(x-y));
        }
    }

    for(auto x : result){
        cout<<x<<" ";
    }
    return 0;
}