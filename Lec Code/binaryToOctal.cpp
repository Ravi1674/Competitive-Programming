#include<bits/stdc++.h>
using namespace std;
int binaryToOctal(int n){
    int ans=0, x=1;
    while(n > 0){
        int ld = n%10;
        ans += x*ld;
        x *= 8;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToOctal(n);
}