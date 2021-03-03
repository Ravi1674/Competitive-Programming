#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int r) {
    sort(arr, arr+(r));
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
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<  arr[i];
    }
}