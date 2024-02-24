#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
printf("\n");
int a=range+1;
for(i=3;i<=range;i++){
    for(j=a-2;j>1;j--){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    for(j=a-3;j>1;j--){
        printf(" ");
    }
    for(j=a-3;j>1;j--){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    for(j=a-2;j>1;j--){
        printf(" ");
    }
    a=a-1;
    printf("\n");
}
int b=1;
for(i=range;i>0;i--){
    for(j=1;j<=2*b-1;j++){
        printf(" ");
    }
    int c=2*i-1;
    for(j=1;j<=2*c;j++){
        printf("*");
    }
    for(j=2;j<=2*b-1;j++){
        printf(" ");
    }
    b=b+1;
    printf("\n");
}
}
