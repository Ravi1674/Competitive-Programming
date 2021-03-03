#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int a;
    srand(time(0));
    a = rand(1,100);
    printf("%d",a);
}