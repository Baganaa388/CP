#include<iostream>
using namespace std;

int main(){
    int n;
    string result = "NO";
    cin>>n;
    if(n<=2 || n%2 == 0){
        cout<<result;
    }
    else{
        int first = n/2 + 1;
        int last = n - first;
        result = "YES";

        cout<<result<<endl;
        cout<<first<<endl;
        for(){
            
        }
        cout<<last<<endl;
        for(){

        }
    }
    return 0;
}