#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int r, int k) {
    sort(arr, arr+(r+1));
    return arr[k-1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<kthSmallest(arr, n-1, k);
}