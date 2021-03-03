#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,rem,sum=0;
    cin>>n;
    int n1 = n;
    while (n>0)
    {
        rem = n%10;
        sum = sum + pow(rem,3);
        n = n/10;
    }
    if(sum == n1){
        cout<<n1<<" is Armstrong Number";
    }
    else{
        cout<<n1<<" is Not Armstrong Number";
    }
    
}