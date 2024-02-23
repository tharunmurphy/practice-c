#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
int a=1;
for(i=range;i>0;i--){
    for(j=1;j<=a;j++){
        printf("%d",j);
    }
    for(j=2;j<=2*i-1;j++){
        printf(" ");
    }
    for(j=a;j>=1;j--){
        printf("%d",j);
    }
    a=a+1;
    printf("\n");
}
}
