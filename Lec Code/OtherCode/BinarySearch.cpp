#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0,e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e==mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(a, n, key);
}