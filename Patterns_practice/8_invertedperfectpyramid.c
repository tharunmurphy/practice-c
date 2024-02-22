#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
int a=1;
for(i=range;i>0;i--){
    for(j=1;j<=a;j++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
        printf("%d",i);
    }
    for(j=1;j<=a;j++){
        printf(" ");
    }
    a=a+1;
    printf("\n");
}
}
