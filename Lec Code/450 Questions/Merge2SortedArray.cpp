#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        int j=m-2;
        int lastElement = a[m-1];
        while (j>=0 && a[j] > b[i])
        {
            a[j+1] = a[j];
            j--;
        }

        if (j!=m-2 || lastElement > b[i])
        {
            a[j+1] = b[i];
            b[i] = lastElement;
        }
        
    }
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    
}