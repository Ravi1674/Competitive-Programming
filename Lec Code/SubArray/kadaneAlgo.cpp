#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    //cout<<"Enter "<<n<<" Element :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maximum=INT_MIN;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
        if(sum<0){
            sum = 0;
        }
        maximum = max(maximum, sum);
    }
    cout<<endl<<maximum;
}