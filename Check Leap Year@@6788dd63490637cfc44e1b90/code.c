// Your code here...
#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    if(days%4==0 && days%100!=0 || days%400==0){
    printf("Leap Year");
    }
    else{
        printf("Not a Leap Year")
    }
    return 0;
}