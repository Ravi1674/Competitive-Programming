#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        int j;
        for(j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
      
        cout<<endl;
    }
    for(int i=row;i>=1;i--){
        int j;
        for(j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        for(j=2;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}