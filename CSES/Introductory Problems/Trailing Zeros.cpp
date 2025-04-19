#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int result;
    long long int temp;
    if(n < 5){
        result = 0;
    }
    else if(n==5){
        result = 1;
    }
    else{
        result = 1;    
        for(long long int i = 6; i<=n; i++){
            if(i % 10 == 0){
                int count = 1;
                int m = i;
                while(m>0){
                    if(m%10==0){
                        count++;
                    }
                    m = m / 10;
                }
                result+=count;
            }
            else if(i % 5 == 0){
                result++;
            }
        }
    }
    cout<<result;
    return 0;
}