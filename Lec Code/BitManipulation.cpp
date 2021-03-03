#include<iostream>
using namespace std;

int getBit(int n, int i){
    if((n & (1<<i)) != 0){
        return 1;
    }
    else
    {
        return 0;
    }
   // return (n & (1<<i)) != 0;
}

int setBit(int n, int i){
    return (n | (1<<i));
}
int clearBit(int n, int i){
    int mask;
    mask = ~(1<<i);
    return (n & mask);
}

int updateBit(int n, int i, int bit){
    return (n | bit<<i);
}
int main(){
    int n,i;
    cin>>n>>i;

    cout<<"Get Bit : "<<getBit(n,i)<<endl;
    cout<<"Set Bit : "<<setBit(n,i)<<endl;
    cout<<"Clear Bit : "<<clearBit(n,i)<<endl;
    
    int bit;
    cin>>bit;
    cout<<"Update Bit : "<<updateBit(n, i, bit)<<endl;
}