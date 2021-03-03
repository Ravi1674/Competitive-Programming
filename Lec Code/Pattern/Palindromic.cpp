#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    cout<<endl;
    for(int i=1;i<=row;i++){
        int j;
        for(j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}