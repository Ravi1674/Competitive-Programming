#include<iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int a = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=a;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rotate(arr,n);
    for (int k = 0; k <n; k++)
    {
        cout<<arr[k]<<" ";
    }
}