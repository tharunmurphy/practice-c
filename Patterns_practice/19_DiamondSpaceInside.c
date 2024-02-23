#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
int a=range+1;
for(i=1;i<=range;i++){
    for(j=a;j>1;j--){
        printf("*");
    }
    for(j=1;j<=2*i-1;j++){
        printf(" ");
    }
    for(j=a;j>1;j--){
        printf("*");
    }
    a=a-1;
    printf("\n");
}
int b=1;
for(i=range;i>0;i--){
    for(j=1;j<=b;j++){
        printf("*");
    }
    for(j=1;j<=2*i-1;j++){
        printf(" ");
    }
    for(j=1;j<=b;j++){
        printf("*");
    }
    b=b+1;
    printf("\n");
}
}
