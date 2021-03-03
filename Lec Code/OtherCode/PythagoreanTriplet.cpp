#include<bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c){
    int l = max(a, max(b,c));
    
    int m, n;
    if(l == a){
        m=b;
        n=c;
    }
    else if(l == b){
        m=a;
        n=c;
    }
    else
    {
        m = a;
        n = b;
    }
    if(pow(l,2)==(pow(m,2)+pow(n,2))){
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythagorean Triplet";
    }
    else
    {
        cout<<"Not Pythagorean Triplet";
    }
    
}