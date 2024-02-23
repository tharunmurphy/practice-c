#include<stdio.h>
int main(){
int i,j,range;
char a='A';
printf("Enter the Range : ");
scanf("%d",&range);
for(i=1;i<=range;i++){
for(j=1;j<=i;j++){
printf("%c",a);
a=a+1;
}
a='A';
printf("\n");
}
}
