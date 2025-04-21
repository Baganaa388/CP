#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    ll x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.rbegin(), a.rend());
    ll count = 0;
    for(int i=0; i<n; i++){
        if(a[i] == x){
            count++;
        }
        else if(a[i] < x){
            ll temp = x - a[i];
            for(int j = n; j>(i+1); j--){
                if(a[j] > temp){
                    break;
                }
                else{
                    count++;
                    break;
                }
            }
        }
    }

    cout<<count<<endl;
    return 0;
}