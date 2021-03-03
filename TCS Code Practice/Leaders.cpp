#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*int j;
    for(int i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                break;
            }
        }
        if(j==n){
            cout<<a[i]<<" ";
        }
    }
    cout<<a[n-1];*/
    int maximum = a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>maximum){
            cout<<maximum<<" ";
            maximum = a[i];

        }
    }
    cout<<maximum;
}
