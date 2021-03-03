#include<bits/stdc++.h>
using namespace std;
int decimalTobinary(int n){
    int ans=0, x=1;
    while(x<=n){
        x*=2;
    }
    x/=2;
    while(x>0){
        int ld = n/x;
        n -= ld*x;
        x/=2;
        ans = ans*10 + ld;
    }
    return ans;
}
int db(int n){
    int ans=0;
    int rem;
    while(n>0){
        rem = n%2;
        ans = ans*10 + rem;
        n/=2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<db(n)<<endl;
    cout<<decimalTobinary(n);
}