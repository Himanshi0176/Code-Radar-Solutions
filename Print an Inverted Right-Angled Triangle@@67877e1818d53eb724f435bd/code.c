#include<stdio.h>
int main(){
    int n=2;
    
    int i=0;
    int j=0;
    for( i=n;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("* ");
    }
    printf("\n");    
    }}