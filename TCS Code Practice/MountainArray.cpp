#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0;

    if (n<3){
        cout<<"Not Mountain Array";
    }
    else{
        while (i<n-1 && arr[i]<arr[i+1])
        {
            i++;
        }
        if(i==0 || i==n-1){
            cout<<"Not Mountain Array";
        }
        else{
            while (i<n-1 && arr[i]>arr[i+1])
            {
                i++;
            }
            if (i==n-1)
            {
                cout<<"Mountain Array";
            }
            else{
                cout<<"Not Mountain Array";
            }
        }
    }
}