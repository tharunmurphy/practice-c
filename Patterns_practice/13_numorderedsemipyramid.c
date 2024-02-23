#include<stdio.h>
int main(){
int i,j,range;
int a=1;
printf("Enter the Range : ");
scanf("%d",&range);
for(i=1;i<=range;i++){
for(j=1;j<=i;j++){
printf("%d ",a);
a=a+1;
}
printf("\n");
}
}
