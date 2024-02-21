#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
for(i=1;i<=range;i++){
    int a=2*i-1;
for(j=1;j<=i;j++){
printf("%d ",a);
}
printf("\n");
}
}
