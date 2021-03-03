#include<iostream>
using namespace std;

int IsPowerOfTwo(int n){
    return (n && !(n & n-1));
}
int main(){
    int n;
    cin>>n;
    cout<<IsPowerOfTwo(n)<<endl;
}