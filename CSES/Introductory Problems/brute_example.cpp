#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> a = {1,2,3,4,5,6,7,8};
    vector<vector<int>> b;
    do{
        b.push_back(a);
    }while(next_permutation(a.begin(), a.end()));
    
    for(auto x : b){
        for(auto c : x){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}