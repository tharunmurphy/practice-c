#include<stdio.h>
int main(){
int i,j,range;
char a='A';
printf("Enter the Range : ");
scanf("%d",&range);
for(i=range;i>0;i--){
for(j=1;j<=i;j++){
printf("%c",a);
a=a+1;
}
a='A';
printf("\n");
}
}
