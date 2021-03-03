#include<iostream>
using namespace std;
int Fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        
        for (int j = 0; j <= i; j++)
        {
            cout<<Fact(i)/(Fact(i-j)*Fact(j));
        }
        cout<<endl;
    }
}