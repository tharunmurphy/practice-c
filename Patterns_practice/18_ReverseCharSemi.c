#include<stdio.h>
int main(){
int i,j,range;
printf("Enter the Range : ");
scanf("%d",&range);
char a='A';
char b=a+range-1;
char c=b;
for(i=1;i<=range;i++){
for(j=c;j<=b;j++){
printf("%c",j);
}
c=c-1;
printf("\n");
}
}
