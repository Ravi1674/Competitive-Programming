#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string n = "5161684893";

    sort(n.begin(),n.end(),greater<int>());
    cout<<n;
}