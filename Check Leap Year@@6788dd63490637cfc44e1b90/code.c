// Your code here...
#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    if(days==365){
    printf("Not a Leap Year");
    }
    else if(days==366){
        printf("Leap Year")
    }
    return 0;
}