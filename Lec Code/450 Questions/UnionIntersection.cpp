#include<bits/stdc++.h>
using namespace std;
void Union(int a[], int b[], int n, int m){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i++];
        }
        else if(b[j]<a[i]){
            cout<<b[j++];
            
        }
        else{
            cout<<a[i++];
            j++;
        }
        cout<<" ";
        k++;
    }
    while(i<n){
        cout<<a[i++]<<" ";
        k++;
    }
    while(j<m){
        cout<<b[j++]<<" ";
        k++;
    }
}
void Intersection(int a[], int b[], int n, int m){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {   
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {   
        cin>>b[i];
    }
    cout<<"Union : ";
    Union(a,b,n,m);
    cout<<"\nIntersection : ";
    Intersection(a,b,n,m);
}