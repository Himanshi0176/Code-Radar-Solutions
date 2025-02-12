
 #include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b: ");
    scanf("%d",&b);

    printf("enter c: ");
    scanf("%d",&c);
    
    int average = (a+b+c)/3;
    printf("enter average: %d",average);

    return 0;
}